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

// Function: entry_0013f11c
// Address: 0x13f11c - 0x13f154
void entry_0013f11c_0x13f11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f11c_0x13f11c");
#endif

    ctx->pc = 0x13f11cu;

    // 0x13f11c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x13f11cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f120: 0xacd40010  sw          $s4, 0x10($a2)
    ctx->pc = 0x13f120u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 20));
    // 0x13f124: 0x34630f00  ori         $v1, $v1, 0xF00
    ctx->pc = 0x13f124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3840);
    // 0x13f128: 0xae540214  sw          $s4, 0x214($s2)
    ctx->pc = 0x13f128u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 20));
    // 0x13f12c: 0xae8300d4  sw          $v1, 0xD4($s4)
    ctx->pc = 0x13f12cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 212), GPR_U32(ctx, 3));
    // 0x13f130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13f130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f134: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13f134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f138: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13f138u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f13c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13f13cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13f140: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13f140u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f144: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13f144u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13f148: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13f148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f14c: 0x3e00008  jr          $ra
    ctx->pc = 0x13F14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F14Cu;
        // 0x13f150: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F154u;
}
