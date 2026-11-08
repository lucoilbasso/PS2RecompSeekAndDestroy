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

// Function: _type2id
// Address: 0x1bc720 - 0x1bc7a8
void _type2id_0x1bc720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_type2id_0x1bc720");
#endif

    ctx->pc = 0x1bc720u;

    // 0x1bc720: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1bc720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc724: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bc724u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bc728: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1bc728u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc72c: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x1bc72cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1bc730: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1BC730u;
    {
        const bool branch_taken_0x1bc730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC730u;
        // 0x1bc734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc730) {
            ctx->pc = 0x1BC79Cu;
            goto label_1bc79c;
        }
    }
    ctx->pc = 0x1BC738u;
    // 0x1bc738: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x1bc738u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
    // 0x1bc73c: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x1bc73cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1bc740: 0x2502db30  addiu       $v0, $t0, -0x24D0
    ctx->pc = 0x1bc740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957872));
    // 0x1bc744: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1bc744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1bc748: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1bc748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x1bc74c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1bc74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1bc750: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x1bc750u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bc754: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BC754u;
    {
        const bool branch_taken_0x1bc754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1BC758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC754u;
        // 0x1bc758: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc754) {
            ctx->pc = 0x1BC77Cu;
            goto label_1bc77c;
        }
    }
    ctx->pc = 0x1BC75Cu;
    // 0x1bc75c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1BC75Cu;
    {
        const bool branch_taken_0x1bc75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc75c) {
            ctx->pc = 0x1BC760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC75Cu;
            // 0x1bc760: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC788u;
            goto label_1bc788;
        }
    }
    ctx->pc = 0x1BC764u;
    // 0x1bc764: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x1bc764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1bc768: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bc768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bc76c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC76Cu;
    {
        const bool branch_taken_0x1bc76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC76Cu;
        // 0x1bc770: 0x2502db30  addiu       $v0, $t0, -0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc76c) {
            ctx->pc = 0x1BC784u;
            goto label_1bc784;
        }
    }
    ctx->pc = 0x1BC774u;
    // 0x1bc774: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BC774u;
    {
        const bool branch_taken_0x1bc774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC774u;
        // 0x1bc778: 0xa72014  dsllv       $a0, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc774) {
            ctx->pc = 0x1BC790u;
            goto label_1bc790;
        }
    }
    ctx->pc = 0x1BC77Cu;
label_1bc77c:
    // 0x1bc77c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC77Cu;
    {
        const bool branch_taken_0x1bc77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC77Cu;
        // 0x1bc780: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc77c) {
            ctx->pc = 0x1BC788u;
            goto label_1bc788;
        }
    }
    ctx->pc = 0x1BC784u;
label_1bc784:
    // 0x1bc784: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1bc784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1bc788:
    // 0x1bc788: 0x2502db30  addiu       $v0, $t0, -0x24D0
    ctx->pc = 0x1bc788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957872));
    // 0x1bc78c: 0xa72014  dsllv       $a0, $a3, $a1
    ctx->pc = 0x1bc78cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
label_1bc790:
    // 0x1bc790: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1bc790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1bc794: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1bc794u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc798: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1bc798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1bc79c:
    // 0x1bc79c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1bc79cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC7A0u;
        // 0x1bc7a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC7A8u;
}
