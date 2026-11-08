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

// Function: entry_00150220
// Address: 0x150220 - 0x150234
void entry_00150220_0x150220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150220_0x150220");
#endif

    ctx->pc = 0x150220u;

    // 0x150220: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x150220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x150224: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150224u;
    {
        const bool branch_taken_0x150224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150224u;
        // 0x150228: 0x2402efff  addiu       $v0, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150224) {
            ctx->pc = 0x150234u;
            return;
        }
    }
    ctx->pc = 0x15022Cu;
    // 0x15022c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15022cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x150230: 0xae0203b0  sw          $v0, 0x3B0($s0)
    ctx->pc = 0x150230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
    ctx->pc = 0x150234u;
}
