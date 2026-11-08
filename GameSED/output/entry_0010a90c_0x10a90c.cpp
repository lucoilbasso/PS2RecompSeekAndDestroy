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

// Function: entry_0010a90c
// Address: 0x10a90c - 0x10a948
void entry_0010a90c_0x10a90c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a90c_0x10a90c");
#endif

    switch (ctx->pc) {
        case 0x10a920u: goto label_10a920;
        case 0x10a92cu: goto label_10a92c;
        case 0x10a938u: goto label_10a938;
        default: break;
    }

    ctx->pc = 0x10a90cu;

    // 0x10a90c: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x10a90cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x10a910: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10A910u;
    {
        const bool branch_taken_0x10a910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A910u;
        // 0x10a914: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a910) {
            ctx->pc = 0x10A948u;
            return;
        }
    }
    ctx->pc = 0x10A918u;
    // 0x10a918: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10A918u;
    SET_GPR_U32(ctx, 31, 0x10A920u);
    ctx->pc = 0x10A91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A918u;
    // 0x10a91c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10A918u, 0x10A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A920u;
label_10a920:
    // 0x10a920: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10a920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a924: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10A924u;
    SET_GPR_U32(ctx, 31, 0x10A92Cu);
    ctx->pc = 0x10A928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A924u;
    // 0x10a928: 0xae620040  sw          $v0, 0x40($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10A924u, 0x10A92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A92Cu;
label_10a92c:
    // 0x10a92c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10a92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a930: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10A930u;
    SET_GPR_U32(ctx, 31, 0x10A938u);
    ctx->pc = 0x10A934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A930u;
    // 0x10a934: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10A930u, 0x10A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A938u;
label_10a938:
    // 0x10a938: 0x96630008  lhu         $v1, 0x8($s3)
    ctx->pc = 0x10a938u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x10a93c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10a93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10a940: 0xa6630008  sh          $v1, 0x8($s3)
    ctx->pc = 0x10a940u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x10a944: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10a944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10a948u;
}
