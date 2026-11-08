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

// Function: entry_001655b4
// Address: 0x1655b4 - 0x1655e0
void entry_001655b4_0x1655b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001655b4_0x1655b4");
#endif

    switch (ctx->pc) {
        case 0x1655c8u: goto label_1655c8;
        default: break;
    }

    ctx->pc = 0x1655b4u;

    // 0x1655b4: 0x8e041258  lw          $a0, 0x1258($s0)
    ctx->pc = 0x1655b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4696)));
    // 0x1655b8: 0x5080001f  beql        $a0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1655B8u;
    {
        const bool branch_taken_0x1655b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1655b8) {
            ctx->pc = 0x1655BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1655B8u;
            // 0x1655bc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165638u;
            return;
        }
    }
    ctx->pc = 0x1655C0u;
    // 0x1655c0: 0xc04c6c6  jal         func_131B18
    ctx->pc = 0x1655C0u;
    SET_GPR_U32(ctx, 31, 0x1655C8u);
    ctx->pc = 0x131B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B18u, 0x1655C0u, 0x1655C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1655C8u;
label_1655c8:
    // 0x1655c8: 0x8e031258  lw          $v1, 0x1258($s0)
    ctx->pc = 0x1655c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4696)));
    // 0x1655cc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1655ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1655d0: 0xae001258  sw          $zero, 0x1258($s0)
    ctx->pc = 0x1655d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4696), GPR_U32(ctx, 0));
    // 0x1655d4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1655D4u;
    {
        const bool branch_taken_0x1655d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1655D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655D4u;
        // 0x1655d8: 0xac620134  sw          $v0, 0x134($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1655d4) {
            ctx->pc = 0x165634u;
            return;
        }
    }
    ctx->pc = 0x1655DCu;
    // 0x1655dc: 0x0  nop
    ctx->pc = 0x1655dcu;
    // NOP
    ctx->pc = 0x1655e0u;
}
