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

// Function: entry_00194060
// Address: 0x194060 - 0x194090
void entry_00194060_0x194060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194060_0x194060");
#endif

    ctx->pc = 0x194060u;

    // 0x194060: 0x22b102a  slt         $v0, $s1, $t3
    ctx->pc = 0x194060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x194064: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x194064u;
    {
        const bool branch_taken_0x194064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194064) {
            ctx->pc = 0x194068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194064u;
            // 0x194068: 0x8e07001c  lw          $a3, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194090u;
            return;
        }
    }
    ctx->pc = 0x19406Cu;
    // 0x19406c: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x19406cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x194070: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x194070u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x194074: 0x9204000e  lbu         $a0, 0xE($s0)
    ctx->pc = 0x194074u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x194078: 0x9205000f  lbu         $a1, 0xF($s0)
    ctx->pc = 0x194078u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x19407c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x19407cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x194080: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x194080u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x194084: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x194084u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x194088: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x194088u;
    {
        const bool branch_taken_0x194088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194088u;
        // 0x19408c: 0xa3a50003  sb          $a1, 0x3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194088) {
            ctx->pc = 0x194108u;
            return;
        }
    }
    ctx->pc = 0x194090u;
}
