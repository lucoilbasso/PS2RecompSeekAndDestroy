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

// Function: entry_001a3bb8
// Address: 0x1a3bb8 - 0x1a3bd4
void entry_001a3bb8_0x1a3bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3bb8_0x1a3bb8");
#endif

    ctx->pc = 0x1a3bb8u;

    // 0x1a3bb8: 0x86020014  lh          $v0, 0x14($s0)
    ctx->pc = 0x1a3bb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a3bbc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a3bbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a3bc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3BC0u;
    {
        const bool branch_taken_0x1a3bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BC0u;
        // 0x1a3bc4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3bc0) {
            ctx->pc = 0x1A3BD4u;
            return;
        }
    }
    ctx->pc = 0x1A3BC8u;
    // 0x1a3bc8: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x1a3bc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1a3bcc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a3bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a3bd0: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x1a3bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1a3bd4u;
}
