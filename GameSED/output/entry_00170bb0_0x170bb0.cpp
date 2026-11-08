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

// Function: entry_00170bb0
// Address: 0x170bb0 - 0x170c00
void entry_00170bb0_0x170bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170bb0_0x170bb0");
#endif

    switch (ctx->pc) {
        case 0x170bd4u: goto label_170bd4;
        case 0x170be4u: goto label_170be4;
        case 0x170bf8u: goto label_170bf8;
        default: break;
    }

    ctx->pc = 0x170bb0u;

    // 0x170bb0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x170bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x170bb4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x170bb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170bb8: 0x14e00028  bnez        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x170BB8u;
    {
        const bool branch_taken_0x170bb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x170BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BB8u;
        // 0x170bbc: 0x140a02d  daddu       $s4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170bb8) {
            ctx->pc = 0x170C5Cu;
            return;
        }
    }
    ctx->pc = 0x170BC0u;
    // 0x170bc0: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x170BC0u;
    {
        const bool branch_taken_0x170bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x170bc0) {
            ctx->pc = 0x170BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170BC0u;
            // 0x170bc4: 0x2309823  subu        $s3, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170C00u;
            return;
        }
    }
    ctx->pc = 0x170BC8u;
    // 0x170bc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x170bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170bcc: 0xc074009  jal         func_1D0024
    ctx->pc = 0x170BCCu;
    SET_GPR_U32(ctx, 31, 0x170BD4u);
    ctx->pc = 0x170BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BCCu;
    // 0x170bd0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x170BCCu, 0x170BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170BD4u;
label_170bd4:
    // 0x170bd4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x170bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170bd8: 0x2512821  addu        $a1, $s2, $s1
    ctx->pc = 0x170bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x170bdc: 0xc074009  jal         func_1D0024
    ctx->pc = 0x170BDCu;
    SET_GPR_U32(ctx, 31, 0x170BE4u);
    ctx->pc = 0x170BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BDCu;
    // 0x170be0: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x170BDCu, 0x170BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170BE4u;
label_170be4:
    // 0x170be4: 0x2d02021  addu        $a0, $s6, $s0
    ctx->pc = 0x170be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x170be8: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x170be8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x170bec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x170becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170bf0: 0xc074009  jal         func_1D0024
    ctx->pc = 0x170BF0u;
    SET_GPR_U32(ctx, 31, 0x170BF8u);
    ctx->pc = 0x170BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BF0u;
    // 0x170bf4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x170BF0u, 0x170BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170BF8u;
label_170bf8:
    // 0x170bf8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x170BF8u;
    {
        const bool branch_taken_0x170bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BF8u;
        // 0x170bfc: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170bf8) {
            ctx->pc = 0x170C5Cu;
            return;
        }
    }
    ctx->pc = 0x170C00u;
}
