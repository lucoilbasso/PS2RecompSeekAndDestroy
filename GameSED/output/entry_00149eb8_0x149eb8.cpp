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

// Function: entry_00149eb8
// Address: 0x149eb8 - 0x149f18
void entry_00149eb8_0x149eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149eb8_0x149eb8");
#endif

    ctx->pc = 0x149eb8u;

    // 0x149eb8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x149eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149ebc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x149ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x149ec0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x149EC0u;
    {
        const bool branch_taken_0x149ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149EC0u;
        // 0x149ec4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ec0) {
            ctx->pc = 0x149F1Cu;
            return;
        }
    }
    ctx->pc = 0x149EC8u;
    // 0x149ec8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x149ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149ecc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x149eccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x149ed0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x149ED0u;
    {
        const bool branch_taken_0x149ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149ED0u;
        // 0x149ed4: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ed0) {
            ctx->pc = 0x149F20u;
            return;
        }
    }
    ctx->pc = 0x149ED8u;
    // 0x149ed8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x149ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x149edc: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x149edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x149ee0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x149ee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x149ee4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x149EE4u;
    {
        const bool branch_taken_0x149ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149EE4u;
        // 0x149ee8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ee4) {
            ctx->pc = 0x149F24u;
            return;
        }
    }
    ctx->pc = 0x149EECu;
    // 0x149eec: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x149eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x149ef0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x149ef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x149ef4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x149EF4u;
    {
        const bool branch_taken_0x149ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149EF4u;
        // 0x149ef8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ef4) {
            ctx->pc = 0x149F24u;
            return;
        }
    }
    ctx->pc = 0x149EFCu;
    // 0x149efc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x149efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x149f00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149f04: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x149f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x149f08: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x149F08u;
    {
        const bool branch_taken_0x149f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F08u;
        // 0x149f0c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f08) {
            ctx->pc = 0x149F24u;
            return;
        }
    }
    ctx->pc = 0x149F10u;
    // 0x149f10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x149f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149f14: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x149f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    ctx->pc = 0x149f18u;
}
