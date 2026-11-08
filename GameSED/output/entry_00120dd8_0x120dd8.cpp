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

// Function: entry_00120dd8
// Address: 0x120dd8 - 0x120e2c
void entry_00120dd8_0x120dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120dd8_0x120dd8");
#endif

    ctx->pc = 0x120dd8u;

label_120dd8:
    // 0x120dd8: 0x83100  sll         $a2, $t0, 4
    ctx->pc = 0x120dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x120ddc: 0xcd2021  addu        $a0, $a2, $t5
    ctx->pc = 0x120ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x120de0: 0x24e30070  addiu       $v1, $a3, 0x70
    ctx->pc = 0x120de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x120de4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x120de4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x120de8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x120de8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x120dec: 0x24e50080  addiu       $a1, $a3, 0x80
    ctx->pc = 0x120decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x120df0: 0xcc1821  addu        $v1, $a2, $t4
    ctx->pc = 0x120df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x120df4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x120df4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120df8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x120df8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x120dfc: 0x24e70090  addiu       $a3, $a3, 0x90
    ctx->pc = 0x120dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
    // 0x120e00: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x120e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x120e04: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x120e04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x120e08: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x120e08u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x120e0c: 0x8f8389c8  lw          $v1, -0x7638($gp)
    ctx->pc = 0x120e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937032)));
    // 0x120e10: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x120e10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x120e14: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x120e14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x120e18: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x120e18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x120e1c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x120E1Cu;
    {
        const bool branch_taken_0x120e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120E1Cu;
        // 0x120e20: 0x10a102b  sltu        $v0, $t0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e1c) {
            ctx->pc = 0x120E2Cu;
            return;
        }
    }
    ctx->pc = 0x120E24u;
    // 0x120e24: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x120E24u;
    {
        const bool branch_taken_0x120e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120e24) {
            ctx->pc = 0x120E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120E24u;
            // 0x120e28: 0x8d270000  lw          $a3, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120dd8;
        }
    }
    ctx->pc = 0x120E2Cu;
}
