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

// Function: entry_001404b0
// Address: 0x1404b0 - 0x1404e8
void entry_001404b0_0x1404b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001404b0_0x1404b0");
#endif

    switch (ctx->pc) {
        case 0x1404c8u: goto label_1404c8;
        case 0x1404dcu: goto label_1404dc;
        default: break;
    }

    ctx->pc = 0x1404b0u;

    // 0x1404b0: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x1404B0u;
    {
        const bool branch_taken_0x1404b0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1404B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404B0u;
        // 0x1404b4: 0x26440078  addiu       $a0, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1404b0) {
            ctx->pc = 0x1404E8u;
            return;
        }
    }
    ctx->pc = 0x1404B8u;
    // 0x1404b8: 0xc64c01a8  lwc1        $f12, 0x1A8($s2)
    ctx->pc = 0x1404b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1404bc: 0xc64d016c  lwc1        $f13, 0x16C($s2)
    ctx->pc = 0x1404bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1404c0: 0xc067c0a  jal         func_19F028
    ctx->pc = 0x1404C0u;
    SET_GPR_U32(ctx, 31, 0x1404C8u);
    ctx->pc = 0x1404C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404C0u;
    // 0x1404c4: 0xc64e0170  lwc1        $f14, 0x170($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F028u, 0x1404C0u, 0x1404C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404C8u;
label_1404c8:
    // 0x1404c8: 0x26440074  addiu       $a0, $s2, 0x74
    ctx->pc = 0x1404c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
    // 0x1404cc: 0xc64c01a4  lwc1        $f12, 0x1A4($s2)
    ctx->pc = 0x1404ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1404d0: 0xc64d0174  lwc1        $f13, 0x174($s2)
    ctx->pc = 0x1404d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1404d4: 0xc067c0a  jal         func_19F028
    ctx->pc = 0x1404D4u;
    SET_GPR_U32(ctx, 31, 0x1404DCu);
    ctx->pc = 0x1404D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404D4u;
    // 0x1404d8: 0xc64e0178  lwc1        $f14, 0x178($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F028u, 0x1404D4u, 0x1404DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404DCu;
label_1404dc:
    // 0x1404dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1404DCu;
    {
        const bool branch_taken_0x1404dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1404E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404DCu;
        // 0x1404e0: 0x8e42019c  lw          $v0, 0x19C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1404dc) {
            ctx->pc = 0x140510u;
            return;
        }
    }
    ctx->pc = 0x1404E4u;
    // 0x1404e4: 0x0  nop
    ctx->pc = 0x1404e4u;
    // NOP
    ctx->pc = 0x1404e8u;
}
