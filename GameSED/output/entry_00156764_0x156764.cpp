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

// Function: entry_00156764
// Address: 0x156764 - 0x15678c
void entry_00156764_0x156764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156764_0x156764");
#endif

    ctx->pc = 0x156764u;

    // 0x156764: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x156764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x156768: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x156768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x15676c: 0x8ea4002c  lw          $a0, 0x2C($s5)
    ctx->pc = 0x15676cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x156770: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x156770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x156774: 0xae230184  sw          $v1, 0x184($s1)
    ctx->pc = 0x156774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 3));
    // 0x156778: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x156778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15677c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15677Cu;
    {
        const bool branch_taken_0x15677c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15677Cu;
        // 0x156780: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15677c) {
            ctx->pc = 0x156790u;
            return;
        }
    }
    ctx->pc = 0x156784u;
    // 0x156784: 0xc055aa2  jal         func_156A88
    ctx->pc = 0x156784u;
    SET_GPR_U32(ctx, 31, 0x15678Cu);
    ctx->pc = 0x156788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156784u;
    // 0x156788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A88u, 0x156784u, 0x15678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15678Cu;
}
