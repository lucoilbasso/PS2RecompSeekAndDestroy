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

// Function: entry_001dfe84
// Address: 0x1dfe84 - 0x1dfed8
void entry_001dfe84_0x1dfe84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfe84_0x1dfe84");
#endif

    switch (ctx->pc) {
        case 0x1dfea8u: goto label_1dfea8;
        case 0x1dfec8u: goto label_1dfec8;
        default: break;
    }

    ctx->pc = 0x1dfe84u;

    // 0x1dfe84: 0x8e6401a4  lw          $a0, 0x1A4($s3)
    ctx->pc = 0x1dfe84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 420)));
    // 0x1dfe88: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1dfe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1dfe8c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DFE8Cu;
    {
        const bool branch_taken_0x1dfe8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE8Cu;
        // 0x1dfe90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe8c) {
            ctx->pc = 0x1DFED8u;
            return;
        }
    }
    ctx->pc = 0x1DFE94u;
    // 0x1dfe94: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dfe94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe98: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1dfe98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe9c: 0x8ca60194  lw          $a2, 0x194($a1)
    ctx->pc = 0x1dfe9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 404)));
    // 0x1dfea0: 0xc064f00  jal         func_193C00
    ctx->pc = 0x1DFEA0u;
    SET_GPR_U32(ctx, 31, 0x1DFEA8u);
    ctx->pc = 0x1DFEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFEA0u;
    // 0x1dfea4: 0x34108000  ori         $s0, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x193C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C00u, 0x1DFEA0u, 0x1DFEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFEA8u;
label_1dfea8:
    // 0x1dfea8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1dfea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1dfeac: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1dfeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1dfeb0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DFEB0u;
    {
        const bool branch_taken_0x1dfeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfeb0) {
            ctx->pc = 0x1DFEB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFEB0u;
            // 0x1dfeb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFED8u;
            return;
        }
    }
    ctx->pc = 0x1DFEB8u;
    // 0x1dfeb8: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x1dfeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x1dfebc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dfebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfec0: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1DFEC0u;
    SET_GPR_U32(ctx, 31, 0x1DFEC8u);
    ctx->pc = 0x1DFEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFEC0u;
    // 0x1dfec4: 0x2484de50  addiu       $a0, $a0, -0x21B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1DFEC0u, 0x1DFEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFEC8u;
label_1dfec8:
    // 0x1dfec8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1dfec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1dfecc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x1dfeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x1dfed0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1dfed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1dfed4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dfed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1dfed8u;
}
