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

// Function: entry_00132ae8
// Address: 0x132ae8 - 0x132b30
void entry_00132ae8_0x132ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132ae8_0x132ae8");
#endif

    switch (ctx->pc) {
        case 0x132af8u: goto label_132af8;
        case 0x132b0cu: goto label_132b0c;
        case 0x132b20u: goto label_132b20;
        default: break;
    }

    ctx->pc = 0x132ae8u;

    // 0x132ae8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x132ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132aec: 0x24846360  addiu       $a0, $a0, 0x6360
    ctx->pc = 0x132aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25440));
    // 0x132af0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x132AF0u;
    SET_GPR_U32(ctx, 31, 0x132AF8u);
    ctx->pc = 0x132AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132AF0u;
    // 0x132af4: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x132AF0u, 0x132AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132AF8u;
label_132af8:
    // 0x132af8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x132af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x132afc: 0x8f8590e8  lw          $a1, -0x6F18($gp)
    ctx->pc = 0x132afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
    // 0x132b00: 0x24846378  addiu       $a0, $a0, 0x6378
    ctx->pc = 0x132b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25464));
    // 0x132b04: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x132B04u;
    SET_GPR_U32(ctx, 31, 0x132B0Cu);
    ctx->pc = 0x132B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B04u;
    // 0x132b08: 0x26101080  addiu       $s0, $s0, 0x1080 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x132B04u, 0x132B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B0Cu;
label_132b0c:
    // 0x132b0c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x132b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x132b10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x132b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132b14: 0x24a56388  addiu       $a1, $a1, 0x6388
    ctx->pc = 0x132b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25480));
    // 0x132b18: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x132B18u;
    SET_GPR_U32(ctx, 31, 0x132B20u);
    ctx->pc = 0x132B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B18u;
    // 0x132b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x132B18u, 0x132B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B20u;
label_132b20:
    // 0x132b20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x132b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132b24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x132b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132b28: 0xc068186  jal         func_1A0618
    ctx->pc = 0x132B28u;
    SET_GPR_U32(ctx, 31, 0x132B30u);
    ctx->pc = 0x132B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B28u;
    // 0x132b2c: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x132B28u, 0x132B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B30u;
}
