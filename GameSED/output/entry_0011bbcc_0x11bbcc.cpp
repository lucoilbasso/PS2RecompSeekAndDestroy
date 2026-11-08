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

// Function: entry_0011bbcc
// Address: 0x11bbcc - 0x11bbf8
void entry_0011bbcc_0x11bbcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bbcc_0x11bbcc");
#endif

    ctx->pc = 0x11bbccu;

    // 0x11bbcc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11bbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11bbd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11bbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bbd4: 0x3406de00  ori         $a2, $zero, 0xDE00
    ctx->pc = 0x11bbd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)56832);
    // 0x11bbd8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x11bbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x11bbdc: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11BBDCu;
    {
        const bool branch_taken_0x11bbdc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBDCu;
        // 0x11bbe0: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbdc) {
            ctx->pc = 0x11BBF8u;
            return;
        }
    }
    ctx->pc = 0x11BBE4u;
    // 0x11bbe4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11bbe8: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x11bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x11bbec: 0x244247c0  addiu       $v0, $v0, 0x47C0
    ctx->pc = 0x11bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18368));
    // 0x11bbf0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11BBF0u;
    {
        const bool branch_taken_0x11bbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBF0u;
        // 0x11bbf4: 0xacc80008  sw          $t0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbf0) {
            ctx->pc = 0x11BC08u;
            return;
        }
    }
    ctx->pc = 0x11BBF8u;
}
