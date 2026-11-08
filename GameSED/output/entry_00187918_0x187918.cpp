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

// Function: entry_00187918
// Address: 0x187918 - 0x187980
void entry_00187918_0x187918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187918_0x187918");
#endif

    switch (ctx->pc) {
        case 0x187960u: goto label_187960;
        default: break;
    }

    ctx->pc = 0x187918u;

    // 0x187918: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x187918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x18791c: 0x96830008  lhu         $v1, 0x8($s4)
    ctx->pc = 0x18791cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x187920: 0x3c061300  lui         $a2, 0x1300
    ctx->pc = 0x187920u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4864 << 16));
    // 0x187924: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x187924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x187928: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x187928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18792c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x18792cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x187930: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x187930u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
    // 0x187934: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x187934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x187938: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x187938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x18793c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x18793cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x187940: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x187940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x187944: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x187944u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x187948: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x187948u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x18794c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x18794cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x187950: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x187950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x187954: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x187954u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x187958: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x187958u;
    SET_GPR_U32(ctx, 31, 0x187960u);
    ctx->pc = 0x18795Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187958u;
    // 0x18795c: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x187958u, 0x187960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187960u;
label_187960:
    // 0x187960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187964: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x187968: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x187968u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18796c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18796cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x187970: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x187970u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187974: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x187974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x187978: 0x3e00008  jr          $ra
    ctx->pc = 0x187978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187978u;
        // 0x18797c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187980u;
}
