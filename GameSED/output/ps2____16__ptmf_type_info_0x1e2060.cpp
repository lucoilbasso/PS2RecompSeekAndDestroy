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

// Function: _$_16__ptmf_type_info
// Address: 0x1e2060 - 0x1e20c4
void ps2____16__ptmf_type_info_0x1e2060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____16__ptmf_type_info_0x1e2060");
#endif

    switch (ctx->pc) {
        case 0x1e2090u: goto label_1e2090;
        default: break;
    }

    ctx->pc = 0x1e2060u;

    // 0x1e2060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2064: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e2064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1e2068: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e2068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e206c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e206cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2070: 0x24420d40  addiu       $v0, $v0, 0xD40
    ctx->pc = 0x1e2070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3392));
    // 0x1e2074: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e2074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e2078: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e207c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e207cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2080: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e2080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1e2084: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1e2084u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1e2088: 0xc072f1a  jal         func_1CBC68
    ctx->pc = 0x1E2088u;
    SET_GPR_U32(ctx, 31, 0x1E2090u);
    ctx->pc = 0x1E208Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2088u;
    // 0x1e208c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBC68u, 0x1E2088u, 0x1E2090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2090u;
label_1e2090:
    // 0x1e2090: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E2090u;
    {
        const bool branch_taken_0x1e2090 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2090u;
        // 0x1e2094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2090) {
            ctx->pc = 0x1E20B0u;
            goto label_1e20b0;
        }
    }
    ctx->pc = 0x1E2098u;
    // 0x1e2098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e209c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e209cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e20a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e20a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e20a4: 0x80682ca  j           func_1A0B28
    ctx->pc = 0x1E20A4u;
    ctx->pc = 0x1E20A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E20A4u;
    // 0x1e20a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B28u;
    ps2___builtin_delete_0x1a0b28(rdram, ctx, runtime); return;
    ctx->pc = 0x1E20ACu;
    // 0x1e20ac: 0x0  nop
    ctx->pc = 0x1e20acu;
    // NOP
label_1e20b0:
    // 0x1e20b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e20b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e20b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e20b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e20b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e20b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e20bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E20BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E20C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20BCu;
        // 0x1e20c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E20BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E20C4u;
}
