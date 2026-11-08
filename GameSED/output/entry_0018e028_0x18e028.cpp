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

// Function: entry_0018e028
// Address: 0x18e028 - 0x18e040
void entry_0018e028_0x18e028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e028_0x18e028");
#endif

    ctx->pc = 0x18e028u;

    // 0x18e028: 0x8c860210  lw          $a2, 0x210($a0)
    ctx->pc = 0x18e028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x18e02c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x18e02cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x18e030: 0x18c0000a  blez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x18E030u;
    {
        const bool branch_taken_0x18e030 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x18E034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E030u;
        // 0x18e034: 0x8c820214  lw          $v0, 0x214($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e030) {
            ctx->pc = 0x18E05Cu;
            return;
        }
    }
    ctx->pc = 0x18E038u;
    // 0x18e038: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18e038u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e03c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x18e03cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18e040u;
}
