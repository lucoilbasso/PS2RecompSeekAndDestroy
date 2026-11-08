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

// Function: entry_001ce570
// Address: 0x1ce570 - 0x1ce5b0
void entry_001ce570_0x1ce570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce570_0x1ce570");
#endif

    ctx->pc = 0x1ce570u;

    // 0x1ce570: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x1ce570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x1ce574: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1CE574u;
    {
        const bool branch_taken_0x1ce574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce574) {
            ctx->pc = 0x1CE578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE574u;
            // 0x1ce578: 0x240707ff  addiu       $a3, $zero, 0x7FF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE5B0u;
            return;
        }
    }
    ctx->pc = 0x1CE57Cu;
    // 0x1ce57c: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x1ce57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x1ce580: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1CE580u;
    {
        const bool branch_taken_0x1ce580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce580) {
            ctx->pc = 0x1CE584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE580u;
            // 0x1ce584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE5BCu;
            return;
        }
    }
    ctx->pc = 0x1CE588u;
    // 0x1ce588: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1CE588u;
    {
        const bool branch_taken_0x1ce588 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce588) {
            ctx->pc = 0x1CE5BCu;
            return;
        }
    }
    ctx->pc = 0x1CE590u;
    // 0x1ce590: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1ce590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ce594: 0x2882fc02  slti        $v0, $a0, -0x3FE
    ctx->pc = 0x1ce594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x1ce598: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CE598u;
    {
        const bool branch_taken_0x1ce598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce598) {
            ctx->pc = 0x1CE59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE598u;
            // 0x1ce59c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE5BCu;
            return;
        }
    }
    ctx->pc = 0x1CE5A0u;
    // 0x1ce5a0: 0x28820400  slti        $v0, $a0, 0x400
    ctx->pc = 0x1ce5a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1ce5a4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE5A4u;
    {
        const bool branch_taken_0x1ce5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce5a4) {
            ctx->pc = 0x1CE5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE5A4u;
            // 0x1ce5a8: 0x248703ff  addiu       $a3, $a0, 0x3FF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1023));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE5B8u;
            return;
        }
    }
    ctx->pc = 0x1CE5ACu;
    // 0x1ce5ac: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x1ce5acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    ctx->pc = 0x1ce5b0u;
}
