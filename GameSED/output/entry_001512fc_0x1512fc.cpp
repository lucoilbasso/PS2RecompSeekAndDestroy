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

// Function: entry_001512fc
// Address: 0x1512fc - 0x151320
void entry_001512fc_0x1512fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001512fc_0x1512fc");
#endif

    ctx->pc = 0x1512fcu;

    // 0x1512fc: 0x56c0002f  bnel        $s6, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x1512FCu;
    {
        const bool branch_taken_0x1512fc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1512fc) {
            ctx->pc = 0x151300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1512FCu;
            // 0x151300: 0x8e0203b0  lw          $v0, 0x3B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1513BCu;
            return;
        }
    }
    ctx->pc = 0x151304u;
    // 0x151304: 0x92030576  lbu         $v1, 0x576($s0)
    ctx->pc = 0x151304u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1398)));
    // 0x151308: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x151308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15130c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15130Cu;
    {
        const bool branch_taken_0x15130c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15130c) {
            ctx->pc = 0x151310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15130Cu;
            // 0x151310: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151320u;
            return;
        }
    }
    ctx->pc = 0x151314u;
    // 0x151314: 0x8e0203b0  lw          $v0, 0x3B0($s0)
    ctx->pc = 0x151314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x151318: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x151318u;
    {
        const bool branch_taken_0x151318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151318u;
        // 0x15131c: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151318) {
            ctx->pc = 0x1513C4u;
            return;
        }
    }
    ctx->pc = 0x151320u;
}
