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

// Function: entry_001404e8
// Address: 0x1404e8 - 0x140510
void entry_001404e8_0x1404e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001404e8_0x1404e8");
#endif

    switch (ctx->pc) {
        case 0x1404f8u: goto label_1404f8;
        case 0x14050cu: goto label_14050c;
        default: break;
    }

    ctx->pc = 0x1404e8u;

    // 0x1404e8: 0xc64c01a8  lwc1        $f12, 0x1A8($s2)
    ctx->pc = 0x1404e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1404ec: 0xc64d016c  lwc1        $f13, 0x16C($s2)
    ctx->pc = 0x1404ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1404f0: 0xc067c0a  jal         func_19F028
    ctx->pc = 0x1404F0u;
    SET_GPR_U32(ctx, 31, 0x1404F8u);
    ctx->pc = 0x1404F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404F0u;
    // 0x1404f4: 0xc64e0170  lwc1        $f14, 0x170($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F028u, 0x1404F0u, 0x1404F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404F8u;
label_1404f8:
    // 0x1404f8: 0x26440074  addiu       $a0, $s2, 0x74
    ctx->pc = 0x1404f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
    // 0x1404fc: 0xc64c01a4  lwc1        $f12, 0x1A4($s2)
    ctx->pc = 0x1404fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x140500: 0xc64d0174  lwc1        $f13, 0x174($s2)
    ctx->pc = 0x140500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x140504: 0xc067c0a  jal         func_19F028
    ctx->pc = 0x140504u;
    SET_GPR_U32(ctx, 31, 0x14050Cu);
    ctx->pc = 0x140508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140504u;
    // 0x140508: 0xc64e0178  lwc1        $f14, 0x178($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F028u, 0x140504u, 0x14050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14050Cu;
label_14050c:
    // 0x14050c: 0x8e42019c  lw          $v0, 0x19C($s2)
    ctx->pc = 0x14050cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 412)));
    ctx->pc = 0x140510u;
}
