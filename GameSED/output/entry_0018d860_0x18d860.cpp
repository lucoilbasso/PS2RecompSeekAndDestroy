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

// Function: entry_0018d860
// Address: 0x18d860 - 0x18d898
void entry_0018d860_0x18d860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d860_0x18d860");
#endif

    ctx->pc = 0x18d860u;

    // 0x18d860: 0x8e250208  lw          $a1, 0x208($s1)
    ctx->pc = 0x18d860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x18d864: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x18d864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x18d868: 0x97a40008  lhu         $a0, 0x8($sp)
    ctx->pc = 0x18d868u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18d86c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18d86cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x18d870: 0x8e270214  lw          $a3, 0x214($s1)
    ctx->pc = 0x18d870u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x18d874: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x18d874u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18d878: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x18d878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x18d87c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x18d87cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x18d880: 0xa6240244  sh          $a0, 0x244($s1)
    ctx->pc = 0x18d880u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 580), (uint16_t)GPR_U32(ctx, 4));
    // 0x18d884: 0xa6260246  sh          $a2, 0x246($s1)
    ctx->pc = 0x18d884u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 582), (uint16_t)GPR_U32(ctx, 6));
    // 0x18d888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d88c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18d890: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x18D890u;
    {
        const bool branch_taken_0x18d890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D890u;
        // 0x18d894: 0xe29021  addu        $s2, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d890) {
            ctx->pc = 0x18DBE4u;
            return;
        }
    }
    ctx->pc = 0x18D898u;
}
