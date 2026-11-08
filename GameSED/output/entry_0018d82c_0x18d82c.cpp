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

// Function: entry_0018d82c
// Address: 0x18d82c - 0x18d860
void entry_0018d82c_0x18d82c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d82c_0x18d82c");
#endif

    ctx->pc = 0x18d82cu;

    // 0x18d82c: 0x97a3000a  lhu         $v1, 0xA($sp)
    ctx->pc = 0x18d82cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
    // 0x18d830: 0x8e240208  lw          $a0, 0x208($s1)
    ctx->pc = 0x18d830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x18d834: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x18d834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x18d838: 0x86250244  lh          $a1, 0x244($s1)
    ctx->pc = 0x18d838u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x18d83c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18d83cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x18d840: 0x8e260214  lw          $a2, 0x214($s1)
    ctx->pc = 0x18d840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x18d844: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x18d844u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18d848: 0xa6230246  sh          $v1, 0x246($s1)
    ctx->pc = 0x18d848u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 582), (uint16_t)GPR_U32(ctx, 3));
    // 0x18d84c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18d850: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18d850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18d854: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x18D854u;
    {
        const bool branch_taken_0x18d854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D854u;
        // 0x18d858: 0xc29021  addu        $s2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d854) {
            ctx->pc = 0x18DBE4u;
            return;
        }
    }
    ctx->pc = 0x18D85Cu;
    // 0x18d85c: 0x0  nop
    ctx->pc = 0x18d85cu;
    // NOP
    ctx->pc = 0x18d860u;
}
