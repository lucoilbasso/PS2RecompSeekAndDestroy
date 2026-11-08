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

// Function: entry_0010818c
// Address: 0x10818c - 0x1081e8
void entry_0010818c_0x10818c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010818c_0x10818c");
#endif

    ctx->pc = 0x10818cu;

    // 0x10818c: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x10818Cu;
    {
        const bool branch_taken_0x10818c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10818Cu;
        // 0x108190: 0x24650014  addiu       $a1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10818c) {
            ctx->pc = 0x1082ECu;
            return;
        }
    }
    ctx->pc = 0x108194u;
    // 0x108194: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x108194u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x108198: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x108198u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x10819c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x10819cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1081a0: 0xa4c00002  sh          $zero, 0x2($a2)
    ctx->pc = 0x1081a0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1081a4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1081a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1081a8: 0xa4c00008  sh          $zero, 0x8($a2)
    ctx->pc = 0x1081a8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1081ac: 0xa4c0000a  sh          $zero, 0xA($a2)
    ctx->pc = 0x1081acu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1081b0: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1081b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x1081b4: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x1081b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x1081b8: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x1081b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x1081bc: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x1081bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x1081c0: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x1081c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x1081c4: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x1081c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x1081c8: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x1081c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x1081cc: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x1081ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x1081d0: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x1081d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
    // 0x1081d4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1081D4u;
    {
        const bool branch_taken_0x1081d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1081D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081D4u;
        // 0x1081d8: 0xacc0007c  sw          $zero, 0x7C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081d4) {
            ctx->pc = 0x1081E8u;
            return;
        }
    }
    ctx->pc = 0x1081DCu;
    // 0x1081dc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1081dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1081e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1081E0u;
    {
        const bool branch_taken_0x1081e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1081E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081E0u;
        // 0x1081e4: 0xa4c20008  sh          $v0, 0x8($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081e0) {
            ctx->pc = 0x1081ECu;
            return;
        }
    }
    ctx->pc = 0x1081E8u;
}
