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

// Function: entry_00178a40
// Address: 0x178a40 - 0x178a58
void entry_00178a40_0x178a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178a40_0x178a40");
#endif

    ctx->pc = 0x178a40u;

    // 0x178a40: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x178a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x178a44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x178a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x178a48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x178a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x178a4c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x178A4Cu;
    {
        const bool branch_taken_0x178a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A4Cu;
        // 0x178a50: 0xae031040  sw          $v1, 0x1040($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a4c) {
            ctx->pc = 0x178A8Cu;
            return;
        }
    }
    ctx->pc = 0x178A54u;
    // 0x178a54: 0x0  nop
    ctx->pc = 0x178a54u;
    // NOP
    ctx->pc = 0x178a58u;
}
