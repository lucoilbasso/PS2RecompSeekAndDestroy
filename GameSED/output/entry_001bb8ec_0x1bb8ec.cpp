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

// Function: entry_001bb8ec
// Address: 0x1bb8ec - 0x1bb914
void entry_001bb8ec_0x1bb8ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb8ec_0x1bb8ec");
#endif

    ctx->pc = 0x1bb8ecu;

    // 0x1bb8ec: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x1bb8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x1bb8f0: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x1bb8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x1bb8f4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB8F4u;
    {
        const bool branch_taken_0x1bb8f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8F4u;
        // 0x1bb8f8: 0xae34000c  sw          $s4, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb8f4) {
            ctx->pc = 0x1BB914u;
            return;
        }
    }
    ctx->pc = 0x1BB8FCu;
    // 0x1bb8fc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1bb8fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb900: 0xa2220010  sb          $v0, 0x10($s1)
    ctx->pc = 0x1bb900u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bb904: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1bb904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1bb908: 0xa2230011  sb          $v1, 0x11($s1)
    ctx->pc = 0x1bb908u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bb90c: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x1bb90cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1bb910: 0xa2220012  sb          $v0, 0x12($s1)
    ctx->pc = 0x1bb910u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1bb914u;
}
