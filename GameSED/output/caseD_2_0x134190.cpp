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

// Function: caseD_2
// Address: 0x134190 - 0x1341c8
void caseD_2_0x134190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x134190");
#endif

    switch (ctx->pc) {
        case 0x1341c4u: goto label_1341c4;
        default: break;
    }

    ctx->pc = 0x134190u;

    // 0x134190: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x134190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x134194: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x134194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x134198: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x134198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13419c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x13419cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1341a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1341a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1341a4: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x1341a4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x1341a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1341a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1341ac: 0xa2880a  movz        $s1, $a1, $v0
    ctx->pc = 0x1341acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
    // 0x1341b0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1341b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1341b4: 0x10930004  beq         $a0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1341B4u;
    {
        const bool branch_taken_0x1341b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        ctx->pc = 0x1341B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1341B4u;
        // 0x1341b8: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1341b4) {
            ctx->pc = 0x1341C8u;
            return;
        }
    }
    ctx->pc = 0x1341BCu;
    // 0x1341bc: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1341BCu;
    SET_GPR_U32(ctx, 31, 0x1341C4u);
    ctx->pc = 0x1341C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1341BCu;
    // 0x1341c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1341BCu, 0x1341C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1341C4u;
label_1341c4:
    // 0x1341c4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1341c4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x1341c8u;
}
