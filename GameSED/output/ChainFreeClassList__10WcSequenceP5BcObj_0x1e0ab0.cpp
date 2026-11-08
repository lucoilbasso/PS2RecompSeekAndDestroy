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

// Function: ChainFreeClassList__10WcSequenceP5BcObj
// Address: 0x1e0ab0 - 0x1e0b08
void ChainFreeClassList__10WcSequenceP5BcObj_0x1e0ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChainFreeClassList__10WcSequenceP5BcObj_0x1e0ab0");
#endif

    switch (ctx->pc) {
        case 0x1e0ad0u: goto label_1e0ad0;
        default: break;
    }

    ctx->pc = 0x1e0ab0u;

    // 0x1e0ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0ab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e0ab8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0abc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e0abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e0ac0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e0ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e0ac8: 0xc0684de  jal         func_1A1378
    ctx->pc = 0x1E0AC8u;
    SET_GPR_U32(ctx, 31, 0x1E0AD0u);
    ctx->pc = 0x1E0ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0AC8u;
    // 0x1e0acc: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1378u, 0x1E0AC8u, 0x1E0AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0AD0u;
label_1e0ad0:
    // 0x1e0ad0: 0x26040074  addiu       $a0, $s0, 0x74
    ctx->pc = 0x1e0ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    // 0x1e0ad4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0AD4u;
    {
        const bool branch_taken_0x1e0ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0AD4u;
        // 0x1e0ad8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ad4) {
            ctx->pc = 0x1E0AF0u;
            goto label_1e0af0;
        }
    }
    ctx->pc = 0x1E0ADCu;
    // 0x1e0adc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0adcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0ae0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0ae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0ae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0ae8: 0x80683b6  j           func_1A0ED8
    ctx->pc = 0x1E0AE8u;
    ctx->pc = 0x1E0AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0AE8u;
    // 0x1e0aec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    BObjListChainObject__FPP8BObjListP5BcObj_0x1a0ed8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E0AF0u;
label_1e0af0:
    // 0x1e0af0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0af0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0af4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0af8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0af8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0afc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0b00: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B00u;
        // 0x1e0b04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0B08u;
}
