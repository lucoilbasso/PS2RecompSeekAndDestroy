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

// Function: SetupFileData__8WcCdpack
// Address: 0x17d238 - 0x17d330
void SetupFileData__8WcCdpack_0x17d238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetupFileData__8WcCdpack_0x17d238");
#endif

    switch (ctx->pc) {
        case 0x17d270u: goto label_17d270;
        case 0x17d2c0u: goto label_17d2c0;
        case 0x17d31cu: goto label_17d31c;
        default: break;
    }

    ctx->pc = 0x17d238u;

    // 0x17d238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d23c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17d23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d240: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d244: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17d244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17d248: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17d248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d24c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17d24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17d250: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x17d250u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17d254: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17d254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17d258: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x17d258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x17d25c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17D25Cu;
    {
        const bool branch_taken_0x17d25c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D25Cu;
        // 0x17d260: 0x228c0  sll         $a1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d25c) {
            ctx->pc = 0x17D268u;
            goto label_17d268;
        }
    }
    ctx->pc = 0x17D264u;
    // 0x17d264: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17d264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17d268:
    // 0x17d268: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17D268u;
    SET_GPR_U32(ctx, 31, 0x17D270u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17D268u, 0x17D270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D270u;
label_17d270:
    // 0x17d270: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17D270u;
    {
        const bool branch_taken_0x17d270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D270u;
        // 0x17d274: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d270) {
            ctx->pc = 0x17D2A0u;
            goto label_17d2a0;
        }
    }
    ctx->pc = 0x17D278u;
    // 0x17d278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d27c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17d27cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d280: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17d280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17d284: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17d284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d288: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17d288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d28c: 0x24a57bd0  addiu       $a1, $a1, 0x7BD0
    ctx->pc = 0x17d28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31696));
    // 0x17d290: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17d290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d294: 0x8068186  j           func_1A0618
    ctx->pc = 0x17D294u;
    ctx->pc = 0x17D298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D294u;
    // 0x17d298: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x17D29Cu;
    // 0x17d29c: 0x0  nop
    ctx->pc = 0x17d29cu;
    // NOP
label_17d2a0:
    // 0x17d2a0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x17d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17d2a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17d2a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d2a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17d2a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d2ac: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x17D2ACu;
    {
        const bool branch_taken_0x17d2ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D2ACu;
        // 0x17d2b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d2ac) {
            ctx->pc = 0x17D314u;
            goto label_17d314;
        }
    }
    ctx->pc = 0x17D2B4u;
    // 0x17d2b4: 0x2627000a  addiu       $a3, $s1, 0xA
    ctx->pc = 0x17d2b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x17d2b8: 0x3c0b0001  lui         $t3, 0x1
    ctx->pc = 0x17d2b8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)1 << 16));
    // 0x17d2bc: 0x0  nop
    ctx->pc = 0x17d2bcu;
    // NOP
label_17d2c0:
    // 0x17d2c0: 0x94e5fffe  lhu         $a1, -0x2($a3)
    ctx->pc = 0x17d2c0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294967294)));
    // 0x17d2c4: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x17d2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x17d2c8: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x17d2c8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17d2cc: 0xa9182b  sltu        $v1, $a1, $t1
    ctx->pc = 0x17d2ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x17d2d0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x17d2d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d2d4: 0x89102b  sltu        $v0, $a0, $t1
    ctx->pc = 0x17d2d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x17d2d8: 0x6b6018  mult        $t4, $v1, $t3
    ctx->pc = 0x17d2d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x17d2dc: 0x4b1818  mult        $v1, $v0, $t3
    ctx->pc = 0x17d2dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17d2e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x17d2e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x17d2e4: 0x18a5021  addu        $t2, $t4, $t2
    ctx->pc = 0x17d2e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x17d2e8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17d2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17d2ec: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x17d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17d2f0: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x17d2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x17d2f4: 0x892023  subu        $a0, $a0, $t1
    ctx->pc = 0x17d2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x17d2f8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x17d2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17d2fc: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x17d2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x17d300: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x17d300u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x17d304: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x17d304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17d308: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x17d308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17d30c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x17D30Cu;
    {
        const bool branch_taken_0x17d30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D30Cu;
        // 0x17d310: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d30c) {
            ctx->pc = 0x17D2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d2c0;
        }
    }
    ctx->pc = 0x17D314u;
label_17d314:
    // 0x17d314: 0xc05f452  jal         func_17D148
    ctx->pc = 0x17D314u;
    SET_GPR_U32(ctx, 31, 0x17D31Cu);
    ctx->pc = 0x17D318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D314u;
    // 0x17d318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D148u, 0x17D314u, 0x17D31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D31Cu;
label_17d31c:
    // 0x17d31c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17d31cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d320: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17d320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d324: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17d324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d328: 0x3e00008  jr          $ra
    ctx->pc = 0x17D328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D328u;
        // 0x17d32c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D330u;
}
