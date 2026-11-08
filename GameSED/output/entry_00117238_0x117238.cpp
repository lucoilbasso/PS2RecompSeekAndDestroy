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

// Function: entry_00117238
// Address: 0x117238 - 0x117260
void entry_00117238_0x117238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117238_0x117238");
#endif

    ctx->pc = 0x117238u;

    // 0x117238: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x117238u;
    {
        const bool branch_taken_0x117238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117238u;
        // 0x11723c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117238) {
            ctx->pc = 0x1172BCu;
            return;
        }
    }
    ctx->pc = 0x117240u;
    // 0x117240: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x117240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x117244: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x117244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117248: 0x2442c540  addiu       $v0, $v0, -0x3AC0
    ctx->pc = 0x117248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952256));
    // 0x11724c: 0x3c140025  lui         $s4, 0x25
    ctx->pc = 0x11724cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)37 << 16));
    // 0x117250: 0x24501c70  addiu       $s0, $v0, 0x1C70
    ctx->pc = 0x117250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7280));
    // 0x117254: 0x3c13001f  lui         $s3, 0x1F
    ctx->pc = 0x117254u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)31 << 16));
    // 0x117258: 0x3c110025  lui         $s1, 0x25
    ctx->pc = 0x117258u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)37 << 16));
    // 0x11725c: 0x0  nop
    ctx->pc = 0x11725cu;
    // NOP
    ctx->pc = 0x117260u;
}
