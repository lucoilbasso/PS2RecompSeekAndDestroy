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

// Function: _$_14__si_type_info
// Address: 0x1e1ab8 - 0x1e1b1c
void ps2____14__si_type_info_0x1e1ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____14__si_type_info_0x1e1ab8");
#endif

    switch (ctx->pc) {
        case 0x1e1ae8u: goto label_1e1ae8;
        default: break;
    }

    ctx->pc = 0x1e1ab8u;

    // 0x1e1ab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e1abc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e1abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1e1ac0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e1ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e1ac4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e1ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1ac8: 0x24420c48  addiu       $v0, $v0, 0xC48
    ctx->pc = 0x1e1ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3144));
    // 0x1e1acc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1ad0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1ad4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e1ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1ad8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e1ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1e1adc: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1e1adcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1e1ae0: 0xc072f1a  jal         func_1CBC68
    ctx->pc = 0x1E1AE0u;
    SET_GPR_U32(ctx, 31, 0x1E1AE8u);
    ctx->pc = 0x1E1AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1AE0u;
    // 0x1e1ae4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBC68u, 0x1E1AE0u, 0x1E1AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1AE8u;
label_1e1ae8:
    // 0x1e1ae8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E1AE8u;
    {
        const bool branch_taken_0x1e1ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AE8u;
        // 0x1e1aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ae8) {
            ctx->pc = 0x1E1B08u;
            goto label_1e1b08;
        }
    }
    ctx->pc = 0x1E1AF0u;
    // 0x1e1af0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1af0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1af4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1af4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1af8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1afc: 0x80682ca  j           func_1A0B28
    ctx->pc = 0x1E1AFCu;
    ctx->pc = 0x1E1B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1AFCu;
    // 0x1e1b00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B28u;
    ps2___builtin_delete_0x1a0b28(rdram, ctx, runtime); return;
    ctx->pc = 0x1E1B04u;
    // 0x1e1b04: 0x0  nop
    ctx->pc = 0x1e1b04u;
    // NOP
label_1e1b08:
    // 0x1e1b08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1b08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1b0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1b0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1b10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1b14: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B14u;
        // 0x1e1b18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1B1Cu;
}
