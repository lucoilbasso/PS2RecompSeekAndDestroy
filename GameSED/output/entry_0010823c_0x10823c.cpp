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

// Function: entry_0010823c
// Address: 0x10823c - 0x108298
void entry_0010823c_0x10823c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010823c_0x10823c");
#endif

    ctx->pc = 0x10823cu;

    // 0x10823c: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x10823Cu;
    {
        const bool branch_taken_0x10823c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10823Cu;
        // 0x108240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10823c) {
            ctx->pc = 0x1084FCu;
            return;
        }
    }
    ctx->pc = 0x108244u;
    // 0x108244: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x108244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x108248: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x108248u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10824c: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x10824cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x108250: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x108250u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x108254: 0xa4c00002  sh          $zero, 0x2($a2)
    ctx->pc = 0x108254u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x108258: 0xa4c00008  sh          $zero, 0x8($a2)
    ctx->pc = 0x108258u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x10825c: 0xa4c0000a  sh          $zero, 0xA($a2)
    ctx->pc = 0x10825cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x108260: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x108260u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x108264: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x108264u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x108268: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x108268u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x10826c: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x10826cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x108270: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x108270u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x108274: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x108274u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x108278: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x108278u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x10827c: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x10827cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x108280: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x108280u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
    // 0x108284: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108284u;
    {
        const bool branch_taken_0x108284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x108288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108284u;
        // 0x108288: 0xacc0007c  sw          $zero, 0x7C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108284) {
            ctx->pc = 0x108298u;
            return;
        }
    }
    ctx->pc = 0x10828Cu;
    // 0x10828c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x10828cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x108290: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x108290u;
    {
        const bool branch_taken_0x108290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108290u;
        // 0x108294: 0xa4c20008  sh          $v0, 0x8($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108290) {
            ctx->pc = 0x10829Cu;
            return;
        }
    }
    ctx->pc = 0x108298u;
}
