#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: caseD_16
// Address: 0x108d88 - 0x108e00
void caseD_16_0x108d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_16_0x108d88");
#endif

    switch (ctx->pc) {
        case 0x108d98u: goto label_108d98;
        case 0x108dacu: goto label_108dac;
        case 0x108dc4u: goto label_108dc4;
        case 0x108de8u: goto label_108de8;
        case 0x108df4u: goto label_108df4;
        default: break;
    }

    ctx->pc = 0x108d88u;

    // 0x108d88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d90: 0xc042144  jal         func_108510
    ctx->pc = 0x108D90u;
    SET_GPR_U32(ctx, 31, 0x108D98u);
    ctx->pc = 0x108D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D90u;
    // 0x108d94: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108D90u, 0x108D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D98u;
label_108d98:
    // 0x108d98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108da0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x108da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108da4: 0xc042144  jal         func_108510
    ctx->pc = 0x108DA4u;
    SET_GPR_U32(ctx, 31, 0x108DACu);
    ctx->pc = 0x108DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DA4u;
    // 0x108da8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108DA4u, 0x108DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DACu;
label_108dac:
    // 0x108dac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x108dacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x108db0: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x108db0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x108db4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108db8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108dbc: 0xc0694d2  jal         func_1A5348
    ctx->pc = 0x108DBCu;
    SET_GPR_U32(ctx, 31, 0x108DC4u);
    ctx->pc = 0x108DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DBCu;
    // 0x108dc0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5348u, 0x108DBCu, 0x108DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DC4u;
label_108dc4:
    // 0x108dc4: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x108dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x108dc8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x108dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x108dcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x108dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108dd0: 0x104400cc  beq         $v0, $a0, . + 4 + (0xCC << 2)
    ctx->pc = 0x108DD0u;
    {
        const bool branch_taken_0x108dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x108DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DD0u;
        // 0x108dd4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108dd0) {
            ctx->pc = 0x109104u;
            return;
        }
    }
    ctx->pc = 0x108DD8u;
    // 0x108dd8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ddc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x108ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108de0: 0xc042144  jal         func_108510
    ctx->pc = 0x108DE0u;
    SET_GPR_U32(ctx, 31, 0x108DE8u);
    ctx->pc = 0x108DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DE0u;
    // 0x108de4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108DE0u, 0x108DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DE8u;
label_108de8:
    // 0x108de8: 0x8e84007c  lw          $a0, 0x7C($s4)
    ctx->pc = 0x108de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x108dec: 0xc0694f4  jal         func_1A53D0
    ctx->pc = 0x108DECu;
    SET_GPR_U32(ctx, 31, 0x108DF4u);
    ctx->pc = 0x108DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DECu;
    // 0x108df0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A53D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A53D0u, 0x108DECu, 0x108DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DF4u;
label_108df4:
    // 0x108df4: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x108DF4u;
    {
        const bool branch_taken_0x108df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DF4u;
        // 0x108df8: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108df4) {
            ctx->pc = 0x109104u;
            return;
        }
    }
    ctx->pc = 0x108DFCu;
    // 0x108dfc: 0x0  nop
    ctx->pc = 0x108dfcu;
    // NOP
    ctx->pc = 0x108e00u;
}
