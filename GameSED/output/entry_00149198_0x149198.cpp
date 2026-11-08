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

// Function: entry_00149198
// Address: 0x149198 - 0x149200
void entry_00149198_0x149198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149198_0x149198");
#endif

    ctx->pc = 0x149198u;

    // 0x149198: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x149198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14919c: 0x6b1024  and         $v0, $v1, $t3
    ctx->pc = 0x14919cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x1491a0: 0x54450037  bnel        $v0, $a1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1491A0u;
    {
        const bool branch_taken_0x1491a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1491a0) {
            ctx->pc = 0x1491A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1491A0u;
            // 0x1491a4: 0x8d820000  lw          $v0, 0x0($t4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149280u;
            return;
        }
    }
    ctx->pc = 0x1491A8u;
    // 0x1491a8: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1491a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1491ac: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1491ACu;
    {
        const bool branch_taken_0x1491ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1491B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1491ACu;
        // 0x1491b0: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1491ac) {
            ctx->pc = 0x149200u;
            return;
        }
    }
    ctx->pc = 0x1491B4u;
    // 0x1491b4: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x1491b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1491b8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1491b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1491bc: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1491BCu;
    {
        const bool branch_taken_0x1491bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1491C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1491BCu;
        // 0x1491c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1491bc) {
            ctx->pc = 0x149264u;
            return;
        }
    }
    ctx->pc = 0x1491C4u;
    // 0x1491c4: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x1491c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1491c8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1491c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1491cc: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1491CCu;
    {
        const bool branch_taken_0x1491cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1491cc) {
            ctx->pc = 0x149264u;
            return;
        }
    }
    ctx->pc = 0x1491D4u;
    // 0x1491d4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1491d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1491d8: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x1491d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1491dc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1491dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1491e0: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1491E0u;
    {
        const bool branch_taken_0x1491e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1491e0) {
            ctx->pc = 0x149264u;
            return;
        }
    }
    ctx->pc = 0x1491E8u;
    // 0x1491e8: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x1491e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1491ec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1491ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1491f0: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1491F0u;
    {
        const bool branch_taken_0x1491f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1491f0) {
            ctx->pc = 0x1491F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1491F0u;
            // 0x1491f4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149264u;
            return;
        }
    }
    ctx->pc = 0x1491F8u;
    // 0x1491f8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1491F8u;
    {
        const bool branch_taken_0x1491f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1491f8) {
            ctx->pc = 0x149264u;
            return;
        }
    }
    ctx->pc = 0x149200u;
}
