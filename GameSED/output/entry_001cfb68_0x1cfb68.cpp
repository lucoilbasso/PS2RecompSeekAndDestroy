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

// Function: entry_001cfb68
// Address: 0x1cfb68 - 0x1cfbb8
void entry_001cfb68_0x1cfb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfb68_0x1cfb68");
#endif

    ctx->pc = 0x1cfb68u;

    // 0x1cfb68: 0x25e2e1c0  addiu       $v0, $t7, -0x1E40
    ctx->pc = 0x1cfb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294959552));
    // 0x1cfb6c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1cfb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cfb70: 0x2447fff8  addiu       $a3, $v0, -0x8
    ctx->pc = 0x1cfb70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1cfb74: 0x675821  addu        $t3, $v1, $a3
    ctx->pc = 0x1cfb74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1cfb78: 0x8d680008  lw          $t0, 0x8($t3)
    ctx->pc = 0x1cfb78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1cfb7c: 0x550b000e  bnel        $t0, $t3, . + 4 + (0xE << 2)
    ctx->pc = 0x1CFB7Cu;
    {
        const bool branch_taken_0x1cfb7c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 11));
        if (branch_taken_0x1cfb7c) {
            ctx->pc = 0x1CFB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFB7Cu;
            // 0x1cfb80: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFBB8u;
            return;
        }
    }
    ctx->pc = 0x1CFB84u;
    // 0x1cfb84: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x1cfb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x1cfb88: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x1cfb88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1cfb8c: 0x83280b  movn        $a1, $a0, $v1
    ctx->pc = 0x1cfb8cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x1cfb90: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1cfb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1cfb94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cfb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfb98: 0x52083  sra         $a0, $a1, 2
    ctx->pc = 0x1cfb98u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 2));
    // 0x1cfb9c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x1cfb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x1cfba0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1cfba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cfba4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1cfba4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1cfba8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1cfba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1cfbac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1CFBACu;
    {
        const bool branch_taken_0x1cfbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFBACu;
        // 0x1cfbb0: 0xace30004  sw          $v1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfbac) {
            ctx->pc = 0x1CFBE8u;
            return;
        }
    }
    ctx->pc = 0x1CFBB4u;
    // 0x1cfbb4: 0x0  nop
    ctx->pc = 0x1cfbb4u;
    // NOP
    ctx->pc = 0x1cfbb8u;
}
