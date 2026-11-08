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

// Function: AddFarTrackParts__9ApcCqtanki
// Address: 0x1da938 - 0x1da98c
void AddFarTrackParts__9ApcCqtanki_0x1da938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddFarTrackParts__9ApcCqtanki_0x1da938");
#endif

    switch (ctx->pc) {
        case 0x1da980u: goto label_1da980;
        default: break;
    }

    ctx->pc = 0x1da938u;

    // 0x1da938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da93c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1da93cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da944: 0x8cc20ccc  lw          $v0, 0xCCC($a2)
    ctx->pc = 0x1da944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3276)));
    // 0x1da948: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1da948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1da94c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA94Cu;
    {
        const bool branch_taken_0x1da94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA94Cu;
        // 0x1da950: 0x24c70ccc  addiu       $a3, $a2, 0xCCC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 3276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da94c) {
            ctx->pc = 0x1DA970u;
            goto label_1da970;
        }
    }
    ctx->pc = 0x1DA954u;
    // 0x1da954: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1da954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1da958: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1da958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1da95c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1da95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1da960: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1da960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1da964: 0xac450cd0  sw          $a1, 0xCD0($v0)
    ctx->pc = 0x1da964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3280), GPR_U32(ctx, 5));
    // 0x1da968: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA968u;
    {
        const bool branch_taken_0x1da968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA968u;
        // 0x1da96c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da968) {
            ctx->pc = 0x1DA980u;
            goto label_1da980;
        }
    }
    ctx->pc = 0x1DA970u;
label_1da970:
    // 0x1da970: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1da970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1da974: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x1da974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1da978: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1DA978u;
    SET_GPR_U32(ctx, 31, 0x1DA980u);
    ctx->pc = 0x1DA97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA978u;
    // 0x1da97c: 0x24a56ea8  addiu       $a1, $a1, 0x6EA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1DA978u, 0x1DA980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA980u;
label_1da980:
    // 0x1da980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da984: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA984u;
        // 0x1da988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA98Cu;
}
