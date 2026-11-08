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

// Function: entry_001becf4
// Address: 0x1becf4 - 0x1bed20
void entry_001becf4_0x1becf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001becf4_0x1becf4");
#endif

    ctx->pc = 0x1becf4u;

    // 0x1becf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1becf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1becf8: 0x57c2000a  bnel        $fp, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BECF8u;
    {
        const bool branch_taken_0x1becf8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x1becf8) {
            ctx->pc = 0x1BECFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BECF8u;
            // 0x1becfc: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BED24u;
            return;
        }
    }
    ctx->pc = 0x1BED00u;
    // 0x1bed00: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x1bed00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x1bed04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BED04u;
    {
        const bool branch_taken_0x1bed04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED04u;
        // 0x1bed08: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed04) {
            ctx->pc = 0x1BED20u;
            return;
        }
    }
    ctx->pc = 0x1BED0Cu;
    // 0x1bed0c: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x1bed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1bed10: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x1bed10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bed14: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1bed14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1bed18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BED18u;
    {
        const bool branch_taken_0x1bed18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED18u;
        // 0x1bed1c: 0xac5e0000  sw          $fp, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed18) {
            ctx->pc = 0x1BED34u;
            return;
        }
    }
    ctx->pc = 0x1BED20u;
}
