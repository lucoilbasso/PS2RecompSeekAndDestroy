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

// Function: _$_16__func_type_info
// Address: 0x1e1fa8 - 0x1e200c
void ps2____16__func_type_info_0x1e1fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____16__func_type_info_0x1e1fa8");
#endif

    switch (ctx->pc) {
        case 0x1e1fd8u: goto label_1e1fd8;
        default: break;
    }

    ctx->pc = 0x1e1fa8u;

    // 0x1e1fa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e1fac: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e1facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1e1fb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e1fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e1fb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e1fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1fb8: 0x24420d58  addiu       $v0, $v0, 0xD58
    ctx->pc = 0x1e1fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3416));
    // 0x1e1fbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1fc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1fc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e1fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1fc8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e1fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1e1fcc: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1e1fccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1e1fd0: 0xc072f1a  jal         func_1CBC68
    ctx->pc = 0x1E1FD0u;
    SET_GPR_U32(ctx, 31, 0x1E1FD8u);
    ctx->pc = 0x1E1FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1FD0u;
    // 0x1e1fd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBC68u, 0x1E1FD0u, 0x1E1FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1FD8u;
label_1e1fd8:
    // 0x1e1fd8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E1FD8u;
    {
        const bool branch_taken_0x1e1fd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FD8u;
        // 0x1e1fdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1fd8) {
            ctx->pc = 0x1E1FF8u;
            goto label_1e1ff8;
        }
    }
    ctx->pc = 0x1E1FE0u;
    // 0x1e1fe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1fe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1fe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1fec: 0x80682ca  j           func_1A0B28
    ctx->pc = 0x1E1FECu;
    ctx->pc = 0x1E1FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1FECu;
    // 0x1e1ff0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B28u;
    ps2___builtin_delete_0x1a0b28(rdram, ctx, runtime); return;
    ctx->pc = 0x1E1FF4u;
    // 0x1e1ff4: 0x0  nop
    ctx->pc = 0x1e1ff4u;
    // NOP
label_1e1ff8:
    // 0x1e1ff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1ff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1ffc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1ffcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2000: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2004: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2004u;
        // 0x1e2008: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E200Cu;
}
