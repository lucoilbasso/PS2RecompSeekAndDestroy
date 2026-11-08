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

// Function: entry_001082f8
// Address: 0x1082f8 - 0x108348
void entry_001082f8_0x1082f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001082f8_0x1082f8");
#endif

    ctx->pc = 0x1082f8u;

    // 0x1082f8: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x1082f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x1082fc: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x1082fcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x108300: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x108300u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108304: 0xa4c00002  sh          $zero, 0x2($a2)
    ctx->pc = 0x108304u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x108308: 0xa4c00008  sh          $zero, 0x8($a2)
    ctx->pc = 0x108308u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x10830c: 0xa4c0000a  sh          $zero, 0xA($a2)
    ctx->pc = 0x10830cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x108310: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x108310u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x108314: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x108314u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x108318: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x108318u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x10831c: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x10831cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x108320: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x108320u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x108324: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x108324u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x108328: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x108328u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x10832c: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x10832cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x108330: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x108330u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
    // 0x108334: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108334u;
    {
        const bool branch_taken_0x108334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x108338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108334u;
        // 0x108338: 0xacc0007c  sw          $zero, 0x7C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108334) {
            ctx->pc = 0x108348u;
            return;
        }
    }
    ctx->pc = 0x10833Cu;
    // 0x10833c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x10833cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x108340: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x108340u;
    {
        const bool branch_taken_0x108340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108340u;
        // 0x108344: 0xa4c20008  sh          $v0, 0x8($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108340) {
            ctx->pc = 0x10834Cu;
            return;
        }
    }
    ctx->pc = 0x108348u;
}
