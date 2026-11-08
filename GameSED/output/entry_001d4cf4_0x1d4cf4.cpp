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

// Function: entry_001d4cf4
// Address: 0x1d4cf4 - 0x1d4d58
void entry_001d4cf4_0x1d4cf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4cf4_0x1d4cf4");
#endif

    switch (ctx->pc) {
        case 0x1d4d34u: goto label_1d4d34;
        case 0x1d4d48u: goto label_1d4d48;
        default: break;
    }

    ctx->pc = 0x1d4cf4u;

    // 0x1d4cf4: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x1d4cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1d4cf8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1d4cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d4cfc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d4cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4d00: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1d4d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d4d04: 0x2a2280a  movz        $a1, $s5, $v0
    ctx->pc = 0x1d4d04u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
    // 0x1d4d08: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x1d4d08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1d4d0c: 0x68182b  sltu        $v1, $v1, $t0
    ctx->pc = 0x1d4d0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1d4d10: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D4D10u;
    {
        const bool branch_taken_0x1d4d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D10u;
        // 0x1d4d14: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d10) {
            ctx->pc = 0x1D4D58u;
            return;
        }
    }
    ctx->pc = 0x1D4D18u;
    // 0x1d4d18: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x1d4d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d4d1c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1D4D1Cu;
    {
        const bool branch_taken_0x1d4d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4d1c) {
            ctx->pc = 0x1D4D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4D1Cu;
            // 0x1d4d20: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4D5Cu;
            return;
        }
    }
    ctx->pc = 0x1D4D24u;
    // 0x1d4d24: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1d4d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4d28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d4d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4d2c: 0xc075487  jal         func_1D521C
    ctx->pc = 0x1D4D2Cu;
    SET_GPR_U32(ctx, 31, 0x1D4D34u);
    ctx->pc = 0x1D4D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4D2Cu;
    // 0x1d4d30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D521Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D521Cu, 0x1D4D2Cu, 0x1D4D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4D34u;
label_1d4d34:
    // 0x1d4d34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d4d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4d38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4d3c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d4d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d4d40: 0xc07508c  jal         func_1D4230
    ctx->pc = 0x1D4D40u;
    SET_GPR_U32(ctx, 31, 0x1D4D48u);
    ctx->pc = 0x1D4D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4D40u;
    // 0x1d4d44: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1D4D40u, 0x1D4D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4D48u;
label_1d4d48:
    // 0x1d4d48: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D4D48u;
    {
        const bool branch_taken_0x1d4d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D48u;
        // 0x1d4d4c: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d48) {
            ctx->pc = 0x1D4DBCu;
            return;
        }
    }
    ctx->pc = 0x1D4D50u;
    // 0x1d4d50: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1D4D50u;
    {
        const bool branch_taken_0x1d4d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D50u;
        // 0x1d4d54: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d50) {
            ctx->pc = 0x1D4DF8u;
            return;
        }
    }
    ctx->pc = 0x1D4D58u;
}
