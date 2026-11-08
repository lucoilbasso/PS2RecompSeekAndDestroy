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

// Function: entry_001242d0
// Address: 0x1242d0 - 0x124300
void entry_001242d0_0x1242d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001242d0_0x1242d0");
#endif

    ctx->pc = 0x1242d0u;

    // 0x1242d0: 0xae930000  sw          $s3, 0x0($s4)
    ctx->pc = 0x1242d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 19));
    // 0x1242d4: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x1242D4u;
    {
        const bool branch_taken_0x1242d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1242D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242D4u;
        // 0x1242d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242d4) {
            ctx->pc = 0x12433Cu;
            return;
        }
    }
    ctx->pc = 0x1242DCu;
    // 0x1242dc: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x1242dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x1242e0: 0x8ee20160  lw          $v0, 0x160($s7)
    ctx->pc = 0x1242e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 352)));
    // 0x1242e4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1242E4u;
    {
        const bool branch_taken_0x1242e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1242e4) {
            ctx->pc = 0x1242E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1242E4u;
            // 0x1242e8: 0xaef20160  sw          $s2, 0x160($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 352), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124300u;
            return;
        }
    }
    ctx->pc = 0x1242ECu;
    // 0x1242ec: 0x56c0000a  bnel        $s6, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1242ECu;
    {
        const bool branch_taken_0x1242ec = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1242ec) {
            ctx->pc = 0x1242F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1242ECu;
            // 0x1242f0: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124318u;
            return;
        }
    }
    ctx->pc = 0x1242F4u;
    // 0x1242f4: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x1242f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x1242f8: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x1242f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x1242fc: 0xaef20160  sw          $s2, 0x160($s7)
    ctx->pc = 0x1242fcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 352), GPR_U32(ctx, 18));
    ctx->pc = 0x124300u;
}
