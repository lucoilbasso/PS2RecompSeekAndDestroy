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

// Function: caseD_c
// Address: 0x133558 - 0x1335d0
void caseD_c_0x133558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x133558");
#endif

    switch (ctx->pc) {
        case 0x133564u: goto label_133564;
        case 0x133570u: goto label_133570;
        case 0x13357cu: goto label_13357c;
        case 0x133588u: goto label_133588;
        default: break;
    }

    ctx->pc = 0x133558u;

    // 0x133558: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13355c: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x13355Cu;
    SET_GPR_U32(ctx, 31, 0x133564u);
    ctx->pc = 0x133560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13355Cu;
    // 0x133560: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x13355Cu, 0x133564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133564u;
label_133564:
    // 0x133564: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133568: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x133568u;
    SET_GPR_U32(ctx, 31, 0x133570u);
    ctx->pc = 0x13356Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133568u;
    // 0x13356c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x133568u, 0x133570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133570u;
label_133570:
    // 0x133570: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133574: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x133574u;
    SET_GPR_U32(ctx, 31, 0x13357Cu);
    ctx->pc = 0x133578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133574u;
    // 0x133578: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x133574u, 0x13357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13357Cu;
label_13357c:
    // 0x13357c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13357cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133580: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x133580u;
    SET_GPR_U32(ctx, 31, 0x133588u);
    ctx->pc = 0x133584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133580u;
    // 0x133584: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x133580u, 0x133588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133588u;
label_133588:
    // 0x133588: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x133588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x13358c: 0x8c42b830  lw          $v0, -0x47D0($v0)
    ctx->pc = 0x13358cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x133590: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x133590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133594: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x133594u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133598: 0x450202c3  bc1fl       . + 4 + (0x2C3 << 2)
    ctx->pc = 0x133598u;
    {
        const bool branch_taken_0x133598 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x133598) {
            ctx->pc = 0x13359Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133598u;
            // 0x13359c: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            return;
        }
    }
    ctx->pc = 0x1335A0u;
    // 0x1335a0: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x1335a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1335a4: 0x450202c0  bc1fl       . + 4 + (0x2C0 << 2)
    ctx->pc = 0x1335A4u;
    {
        const bool branch_taken_0x1335a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1335a4) {
            ctx->pc = 0x1335A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1335A4u;
            // 0x1335a8: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            return;
        }
    }
    ctx->pc = 0x1335ACu;
    // 0x1335ac: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1335acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1335b0: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x1335b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1335b4: 0x450202bc  bc1fl       . + 4 + (0x2BC << 2)
    ctx->pc = 0x1335B4u;
    {
        const bool branch_taken_0x1335b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1335b4) {
            ctx->pc = 0x1335B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1335B4u;
            // 0x1335b8: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            return;
        }
    }
    ctx->pc = 0x1335BCu;
    // 0x1335bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1335bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1335c0: 0x450202b9  bc1fl       . + 4 + (0x2B9 << 2)
    ctx->pc = 0x1335C0u;
    {
        const bool branch_taken_0x1335c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1335c0) {
            ctx->pc = 0x1335C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1335C0u;
            // 0x1335c4: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            return;
        }
    }
    ctx->pc = 0x1335C8u;
    // 0x1335c8: 0x100002b6  b           . + 4 + (0x2B6 << 2)
    ctx->pc = 0x1335C8u;
    {
        const bool branch_taken_0x1335c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1335CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335C8u;
        // 0x1335cc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335c8) {
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x1335D0u;
}
