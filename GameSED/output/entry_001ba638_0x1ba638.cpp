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

// Function: entry_001ba638
// Address: 0x1ba638 - 0x1ba670
void entry_001ba638_0x1ba638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba638_0x1ba638");
#endif

    switch (ctx->pc) {
        case 0x1ba654u: goto label_1ba654;
        case 0x1ba65cu: goto label_1ba65c;
        default: break;
    }

    ctx->pc = 0x1ba638u;

    // 0x1ba638: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1ba638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1ba63c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1ba63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1ba640: 0x8c44d690  lw          $a0, -0x2970($v0)
    ctx->pc = 0x1ba640u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x40D690u));
    // 0x1ba644: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1ba644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1ba648: 0xac71c09c  sw          $s1, -0x3F64($v1)
    ctx->pc = 0x1ba648u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x24C09Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24C09Cu, _value); } while (0);
    // 0x1ba64c: 0xc06bcd8  jal         func_1AF360
    ctx->pc = 0x1BA64Cu;
    SET_GPR_U32(ctx, 31, 0x1BA654u);
    ctx->pc = 0x1BA650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA64Cu;
    // 0x1ba650: 0x24a5d698  addiu       $a1, $a1, -0x2968 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF360u, 0x1BA64Cu, 0x1BA654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA654u;
label_1ba654:
    // 0x1ba654: 0xc06e9f8  jal         func_1BA7E0
    ctx->pc = 0x1BA654u;
    SET_GPR_U32(ctx, 31, 0x1BA65Cu);
    ctx->pc = 0x1BA658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA654u;
    // 0x1ba658: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA7E0u, 0x1BA654u, 0x1BA65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA65Cu;
label_1ba65c:
    // 0x1ba65c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA65Cu;
    {
        const bool branch_taken_0x1ba65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA65Cu;
        // 0x1ba660: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba65c) {
            ctx->pc = 0x1BA678u;
            return;
        }
    }
    ctx->pc = 0x1BA664u;
    // 0x1ba664: 0x8e04c0a8  lw          $a0, -0x3F58($s0)
    ctx->pc = 0x1ba664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951080)));
    // 0x1ba668: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1BA668u;
    SET_GPR_U32(ctx, 31, 0x1BA670u);
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1BA668u, 0x1BA670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA670u;
}
