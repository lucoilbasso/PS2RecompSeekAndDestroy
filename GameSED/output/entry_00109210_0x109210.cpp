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

// Function: entry_00109210
// Address: 0x109210 - 0x109220
void entry_00109210_0x109210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109210_0x109210");
#endif

    ctx->pc = 0x109210u;

    // 0x109210: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x109210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x109214: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x109214u;
    {
        const bool branch_taken_0x109214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x109218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109214u;
        // 0x109218: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109214) {
            ctx->pc = 0x109220u;
            return;
        }
    }
    ctx->pc = 0x10921Cu;
    // 0x10921c: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x10921cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    ctx->pc = 0x109220u;
}
