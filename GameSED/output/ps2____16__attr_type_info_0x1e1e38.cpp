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

// Function: _$_16__attr_type_info
// Address: 0x1e1e38 - 0x1e1e9c
void ps2____16__attr_type_info_0x1e1e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____16__attr_type_info_0x1e1e38");
#endif

    switch (ctx->pc) {
        case 0x1e1e68u: goto label_1e1e68;
        default: break;
    }

    ctx->pc = 0x1e1e38u;

    // 0x1e1e38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e1e3c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e1e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1e1e40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e1e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e1e44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e1e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1e48: 0x24420d88  addiu       $v0, $v0, 0xD88
    ctx->pc = 0x1e1e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3464));
    // 0x1e1e4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1e50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1e54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e1e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1e58: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e1e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1e1e5c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1e1e5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1e1e60: 0xc072f1a  jal         func_1CBC68
    ctx->pc = 0x1E1E60u;
    SET_GPR_U32(ctx, 31, 0x1E1E68u);
    ctx->pc = 0x1E1E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1E60u;
    // 0x1e1e64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBC68u, 0x1E1E60u, 0x1E1E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E68u;
label_1e1e68:
    // 0x1e1e68: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E1E68u;
    {
        const bool branch_taken_0x1e1e68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E68u;
        // 0x1e1e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e68) {
            ctx->pc = 0x1E1E88u;
            goto label_1e1e88;
        }
    }
    ctx->pc = 0x1E1E70u;
    // 0x1e1e70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1e74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1e74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1e78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1e7c: 0x80682ca  j           func_1A0B28
    ctx->pc = 0x1E1E7Cu;
    ctx->pc = 0x1E1E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1E7Cu;
    // 0x1e1e80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B28u;
    ps2___builtin_delete_0x1a0b28(rdram, ctx, runtime); return;
    ctx->pc = 0x1E1E84u;
    // 0x1e1e84: 0x0  nop
    ctx->pc = 0x1e1e84u;
    // NOP
label_1e1e88:
    // 0x1e1e88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1e88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1e8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1e8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1e90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1e94: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E94u;
        // 0x1e1e98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1E9Cu;
}
