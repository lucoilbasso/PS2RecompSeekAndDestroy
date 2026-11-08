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

// Function: entry_00136c10
// Address: 0x136c10 - 0x136c44
void entry_00136c10_0x136c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136c10_0x136c10");
#endif

    ctx->pc = 0x136c10u;

    // 0x136c10: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x136c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x136c14: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x136c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x136c18: 0x1451000a  bne         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x136C18u;
    {
        const bool branch_taken_0x136c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x136C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C18u;
        // 0x136c1c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c18) {
            ctx->pc = 0x136C44u;
            return;
        }
    }
    ctx->pc = 0x136C20u;
    // 0x136c20: 0x8ce50178  lw          $a1, 0x178($a3)
    ctx->pc = 0x136c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 376)));
    // 0x136c24: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x136C24u;
    {
        const bool branch_taken_0x136c24 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x136c24) {
            ctx->pc = 0x136C44u;
            return;
        }
    }
    ctx->pc = 0x136C2Cu;
    // 0x136c2c: 0x8ce20174  lw          $v0, 0x174($a3)
    ctx->pc = 0x136c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x136c30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x136C30u;
    {
        const bool branch_taken_0x136c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C30u;
        // 0x136c34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c30) {
            ctx->pc = 0x136C44u;
            return;
        }
    }
    ctx->pc = 0x136C38u;
    // 0x136c38: 0x8ce801b4  lw          $t0, 0x1B4($a3)
    ctx->pc = 0x136c38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x136c3c: 0xc041228  jal         func_1048A0
    ctx->pc = 0x136C3Cu;
    SET_GPR_U32(ctx, 31, 0x136C44u);
    ctx->pc = 0x136C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C3Cu;
    // 0x136c40: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x136C3Cu, 0x136C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C44u;
}
