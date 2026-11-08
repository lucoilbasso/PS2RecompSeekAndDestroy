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

// Function: entry_0015e260
// Address: 0x15e260 - 0x15e278
void entry_0015e260_0x15e260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e260_0x15e260");
#endif

    ctx->pc = 0x15e260u;

    // 0x15e260: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15e260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x15e264: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x15e264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x15e268: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x15e268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15e26c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x15E26Cu;
    {
        const bool branch_taken_0x15e26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E26Cu;
        // 0x15e270: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e26c) {
            ctx->pc = 0x15E2E8u;
            return;
        }
    }
    ctx->pc = 0x15E274u;
    // 0x15e274: 0x0  nop
    ctx->pc = 0x15e274u;
    // NOP
    ctx->pc = 0x15e278u;
}
