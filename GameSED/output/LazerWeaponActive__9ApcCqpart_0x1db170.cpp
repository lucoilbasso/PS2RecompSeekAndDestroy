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

// Function: LazerWeaponActive__9ApcCqpart
// Address: 0x1db170 - 0x1db1dc
void LazerWeaponActive__9ApcCqpart_0x1db170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LazerWeaponActive__9ApcCqpart_0x1db170");
#endif

    switch (ctx->pc) {
        case 0x1db1bcu: goto label_1db1bc;
        default: break;
    }

    ctx->pc = 0x1db170u;

    // 0x1db170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db178: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db17c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1db17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1db180: 0x8e021268  lw          $v0, 0x1268($s0)
    ctx->pc = 0x1db180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4712)));
    // 0x1db184: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DB184u;
    {
        const bool branch_taken_0x1db184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB184u;
        // 0x1db188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db184) {
            ctx->pc = 0x1DB1CCu;
            goto label_1db1cc;
        }
    }
    ctx->pc = 0x1DB18Cu;
    // 0x1db18c: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x1db18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
    // 0x1db190: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x1db190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1db194: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1db194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1db198: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1DB198u;
    {
        const bool branch_taken_0x1db198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db198) {
            ctx->pc = 0x1DB19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB198u;
            // 0x1db19c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB1C4u;
            goto label_1db1c4;
        }
    }
    ctx->pc = 0x1DB1A0u;
    // 0x1db1a0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DB1A0u;
    {
        const bool branch_taken_0x1db1a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1A0u;
        // 0x1db1a4: 0x2404006a  addiu       $a0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1a0) {
            ctx->pc = 0x1DB1ACu;
            goto label_1db1ac;
        }
    }
    ctx->pc = 0x1DB1A8u;
    // 0x1db1a8: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x1db1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_1db1ac:
    // 0x1db1ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1db1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1b4: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x1DB1B4u;
    SET_GPR_U32(ctx, 31, 0x1DB1BCu);
    ctx->pc = 0x1DB1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1B4u;
    // 0x1db1b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x1DB1B4u, 0x1DB1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1BCu;
label_1db1bc:
    // 0x1db1bc: 0xae021258  sw          $v0, 0x1258($s0)
    ctx->pc = 0x1db1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4696), GPR_U32(ctx, 2));
    // 0x1db1c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1db1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db1c4:
    // 0x1db1c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db1c8: 0xae031268  sw          $v1, 0x1268($s0)
    ctx->pc = 0x1db1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4712), GPR_U32(ctx, 3));
label_1db1cc:
    // 0x1db1cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db1ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db1d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1D4u;
        // 0x1db1d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB1DCu;
}
