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

// Function: entry_00107d68
// Address: 0x107d68 - 0x107dd0
void entry_00107d68_0x107d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107d68_0x107d68");
#endif

    switch (ctx->pc) {
        case 0x107d90u: goto label_107d90;
        case 0x107db4u: goto label_107db4;
        default: break;
    }

    ctx->pc = 0x107d68u;

    // 0x107d68: 0x620002f  bltz        $s1, . + 4 + (0x2F << 2)
    ctx->pc = 0x107D68u;
    {
        const bool branch_taken_0x107d68 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x107D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D68u;
        // 0x107d6c: 0x24022846  addiu       $v0, $zero, 0x2846 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10310));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d68) {
            ctx->pc = 0x107E28u;
            return;
        }
    }
    ctx->pc = 0x107D70u;
    // 0x107d70: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x107d70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x107d74: 0x5462002d  bnel        $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x107D74u;
    {
        const bool branch_taken_0x107d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107d74) {
            ctx->pc = 0x107D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107D74u;
            // 0x107d78: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107E2Cu;
            return;
        }
    }
    ctx->pc = 0x107D7Cu;
    // 0x107d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107d80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x107d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107d84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107d88: 0xc05ac0a  jal         func_16B028
    ctx->pc = 0x107D88u;
    SET_GPR_U32(ctx, 31, 0x107D90u);
    ctx->pc = 0x107D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107D88u;
    // 0x107d8c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B028u, 0x107D88u, 0x107D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D90u;
label_107d90:
    // 0x107d90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x107d90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107d94: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x107D94u;
    {
        const bool branch_taken_0x107d94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D94u;
        // 0x107d98: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d94) {
            ctx->pc = 0x107E08u;
            return;
        }
    }
    ctx->pc = 0x107D9Cu;
    // 0x107d9c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x107d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x107da0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107da4: 0x10640015  beq         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x107DA4u;
    {
        const bool branch_taken_0x107da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x107DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DA4u;
        // 0x107da8: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107da4) {
            ctx->pc = 0x107DFCu;
            return;
        }
    }
    ctx->pc = 0x107DACu;
    // 0x107dac: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x107DACu;
    SET_GPR_U32(ctx, 31, 0x107DB4u);
    ctx->pc = 0x107DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107DACu;
    // 0x107db0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x107DACu, 0x107DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107DB4u;
label_107db4:
    // 0x107db4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x107db4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107db8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x107db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x107dbc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x107dbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x107dc0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x107DC0u;
    {
        const bool branch_taken_0x107dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DC0u;
        // 0x107dc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107dc0) {
            ctx->pc = 0x107DF0u;
            return;
        }
    }
    ctx->pc = 0x107DC8u;
    // 0x107dc8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x107DC8u;
    {
        const bool branch_taken_0x107dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DC8u;
        // 0x107dcc: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107dc8) {
            ctx->pc = 0x107DECu;
            return;
        }
    }
    ctx->pc = 0x107DD0u;
}
