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

// Function: _multadd
// Address: 0x1d53f8 - 0x1d5500
void _multadd_0x1d53f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_multadd_0x1d53f8");
#endif

    switch (ctx->pc) {
        case 0x1d5430u: goto label_1d5430;
        case 0x1d549cu: goto label_1d549c;
        case 0x1d54b8u: goto label_1d54b8;
        case 0x1d54c8u: goto label_1d54c8;
        default: break;
    }

    ctx->pc = 0x1d53f8u;

    // 0x1d53f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d53f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d53fc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1d53fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5400: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5404: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d5404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5408: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d5408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d540c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1d540cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5410: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d5410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d5414: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d5414u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d541c: 0x26270014  addiu       $a3, $s1, 0x14
    ctx->pc = 0x1d541cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1d5420: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d5420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d5424: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d5424u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5428: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d5428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1d542c: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x1d542cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1d5430:
    // 0x1d5430: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1d5430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d5434: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d5434u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d5438: 0x132302a  slt         $a2, $t1, $s2
    ctx->pc = 0x1d5438u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d543c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1d543cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d5440: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1d5440u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1d5444: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x1d5444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d5448: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x1d5448u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d544c: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1d544cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d5450: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x1d5450u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1d5454: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1d5454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1d5458: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d5458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d545c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1d545cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1d5460: 0x39c02  srl         $s3, $v1, 16
    ctx->pc = 0x1d5460u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1d5464: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d5464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d5468: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1d5468u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1d546c: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D546Cu;
    {
        const bool branch_taken_0x1d546c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D546Cu;
        // 0x1d5470: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d546c) {
            ctx->pc = 0x1D5430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5430;
        }
    }
    ctx->pc = 0x1D5474u;
    // 0x1d5474: 0x1260001a  beqz        $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D5474u;
    {
        const bool branch_taken_0x1d5474 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5474u;
        // 0x1d5478: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5474) {
            ctx->pc = 0x1D54E0u;
            goto label_1d54e0;
        }
    }
    ctx->pc = 0x1D547Cu;
    // 0x1d547c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d547cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d5480: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d5480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d5484: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D5484u;
    {
        const bool branch_taken_0x1d5484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5484u;
        // 0x1d5488: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5484) {
            ctx->pc = 0x1D54CCu;
            goto label_1d54cc;
        }
    }
    ctx->pc = 0x1D548Cu;
    // 0x1d548c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1d548cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d5490: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d5490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5494: 0xc0754c8  jal         func_1D5320
    ctx->pc = 0x1D5494u;
    SET_GPR_U32(ctx, 31, 0x1D549Cu);
    ctx->pc = 0x1D5498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5494u;
    // 0x1d5498: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5320u, 0x1D5494u, 0x1D549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D549Cu;
label_1d549c:
    // 0x1d549c: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1d549cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d54a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d54a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d54a4: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x1d54a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1d54a8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d54a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d54ac: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1d54acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1d54b0: 0xc074009  jal         func_1D0024
    ctx->pc = 0x1D54B0u;
    SET_GPR_U32(ctx, 31, 0x1D54B8u);
    ctx->pc = 0x1D54B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D54B0u;
    // 0x1d54b4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x1D54B0u, 0x1D54B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D54B8u;
label_1d54b8:
    // 0x1d54b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d54b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d54bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d54bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d54c0: 0xc0754f2  jal         func_1D53C8
    ctx->pc = 0x1D54C0u;
    SET_GPR_U32(ctx, 31, 0x1D54C8u);
    ctx->pc = 0x1D54C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D54C0u;
    // 0x1d54c4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53C8u, 0x1D54C0u, 0x1D54C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D54C8u;
label_1d54c8:
    // 0x1d54c8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1d54c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1d54cc:
    // 0x1d54cc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d54ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d54d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d54d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d54d4: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x1d54d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
    // 0x1d54d8: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x1d54d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x1d54dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d54dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d54e0:
    // 0x1d54e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d54e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d54e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d54e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d54e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d54e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d54ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d54ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d54f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d54f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d54f4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d54f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d54f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D54F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D54FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54F8u;
        // 0x1d54fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D54F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5500u;
}
