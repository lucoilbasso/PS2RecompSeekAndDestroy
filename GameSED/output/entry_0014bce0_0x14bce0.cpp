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

// Function: entry_0014bce0
// Address: 0x14bce0 - 0x14bd10
void entry_0014bce0_0x14bce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bce0_0x14bce0");
#endif

    ctx->pc = 0x14bce0u;

    // 0x14bce0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14bce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14bce4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14bce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14bce8: 0xa4e20238  sh          $v0, 0x238($a3)
    ctx->pc = 0x14bce8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 568), (uint16_t)GPR_U32(ctx, 2));
    // 0x14bcec: 0xace0023c  sw          $zero, 0x23C($a3)
    ctx->pc = 0x14bcecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 572), GPR_U32(ctx, 0));
    // 0x14bcf0: 0x1220005f  beqz        $s1, . + 4 + (0x5F << 2)
    ctx->pc = 0x14BCF0u;
    {
        const bool branch_taken_0x14bcf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCF0u;
        // 0x14bcf4: 0xa4e6023a  sh          $a2, 0x23A($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 570), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bcf0) {
            ctx->pc = 0x14BE70u;
            return;
        }
    }
    ctx->pc = 0x14BCF8u;
    // 0x14bcf8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x14bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x14bcfc: 0x56220004  bnel        $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14BCFCu;
    {
        const bool branch_taken_0x14bcfc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x14bcfc) {
            ctx->pc = 0x14BD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BCFCu;
            // 0x14bd00: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BD10u;
            return;
        }
    }
    ctx->pc = 0x14BD04u;
    // 0x14bd04: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x14BD04u;
    {
        const bool branch_taken_0x14bd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD04u;
        // 0x14bd08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd04) {
            ctx->pc = 0x14BE6Cu;
            return;
        }
    }
    ctx->pc = 0x14BD0Cu;
    // 0x14bd0c: 0x0  nop
    ctx->pc = 0x14bd0cu;
    // NOP
    ctx->pc = 0x14bd10u;
}
