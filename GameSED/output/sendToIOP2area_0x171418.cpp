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

// Function: sendToIOP2area
// Address: 0x171418 - 0x171580
void sendToIOP2area_0x171418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sendToIOP2area_0x171418");
#endif

    switch (ctx->pc) {
        case 0x1714b8u: goto label_1714b8;
        case 0x1714c8u: goto label_1714c8;
        case 0x1714dcu: goto label_1714dc;
        case 0x171500u: goto label_171500;
        case 0x171510u: goto label_171510;
        case 0x171524u: goto label_171524;
        case 0x17153cu: goto label_17153c;
        case 0x17154cu: goto label_17154c;
        default: break;
    }

    ctx->pc = 0x171418u;

    // 0x171418: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x171418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17141c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17141cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171420: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x171420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171424: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x171424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x171428: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x171428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17142c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17142cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x171430: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x171430u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171434: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x171434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x171438: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x171438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x17143c: 0x211b821  addu        $s7, $s0, $s1
    ctx->pc = 0x17143cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x171440: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x171440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x171444: 0x2e71023  subu        $v0, $s7, $a3
    ctx->pc = 0x171444u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 7)));
    // 0x171448: 0xf7382a  slt         $a3, $a3, $s7
    ctx->pc = 0x171448u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x17144c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x17144cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171450: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x171450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x171454: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x171454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x171458: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x171458u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17145c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x17145cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x171460: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x171460u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171464: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x171464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x171468: 0x51182a  slt         $v1, $v0, $s1
    ctx->pc = 0x171468u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x17146c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x17146cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x171470: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x171470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171474: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x171474u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171478: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x171478u;
    {
        const bool branch_taken_0x171478 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x17147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171478u;
        // 0x17147c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171478) {
            ctx->pc = 0x1714A4u;
            goto label_1714a4;
        }
    }
    ctx->pc = 0x171480u;
    // 0x171480: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x171480u;
    {
        const bool branch_taken_0x171480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x171480) {
            ctx->pc = 0x171484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171480u;
            // 0x171484: 0x2228823  subu        $s1, $s1, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1714A0u;
            goto label_1714a0;
        }
    }
    ctx->pc = 0x171488u;
    // 0x171488: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x171488u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17148c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17148cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171490: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x171490u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x171494: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x171494u;
    {
        const bool branch_taken_0x171494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171494u;
        // 0x171498: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171494) {
            ctx->pc = 0x1714A4u;
            goto label_1714a4;
        }
    }
    ctx->pc = 0x17149Cu;
    // 0x17149c: 0x0  nop
    ctx->pc = 0x17149cu;
    // NOP
label_1714a0:
    // 0x1714a0: 0x211b821  addu        $s7, $s0, $s1
    ctx->pc = 0x1714a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1714a4:
    // 0x1714a4: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1714a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1714a8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1714A8u;
    {
        const bool branch_taken_0x1714a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1714ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714A8u;
        // 0x1714ac: 0x2509823  subu        $s3, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714a8) {
            ctx->pc = 0x1714E8u;
            goto label_1714e8;
        }
    }
    ctx->pc = 0x1714B0u;
    // 0x1714b0: 0xc05c560  jal         func_171580
    ctx->pc = 0x1714B0u;
    SET_GPR_U32(ctx, 31, 0x1714B8u);
    ctx->pc = 0x171580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171580u, 0x1714B0u, 0x1714B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1714B8u;
label_1714b8:
    // 0x1714b8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1714b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714bc: 0x2123023  subu        $a2, $s0, $s2
    ctx->pc = 0x1714bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1714c0: 0xc05c560  jal         func_171580
    ctx->pc = 0x1714C0u;
    SET_GPR_U32(ctx, 31, 0x1714C8u);
    ctx->pc = 0x1714C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1714C0u;
    // 0x1714c4: 0x2922821  addu        $a1, $s4, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171580u, 0x1714C0u, 0x1714C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1714C8u;
label_1714c8:
    // 0x1714c8: 0x3d02021  addu        $a0, $fp, $s0
    ctx->pc = 0x1714c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x1714cc: 0x922023  subu        $a0, $a0, $s2
    ctx->pc = 0x1714ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1714d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1714d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714d4: 0xc05c560  jal         func_171580
    ctx->pc = 0x1714D4u;
    SET_GPR_U32(ctx, 31, 0x1714DCu);
    ctx->pc = 0x1714D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1714D4u;
    // 0x1714d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171580u, 0x1714D4u, 0x1714DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1714DCu;
label_1714dc:
    // 0x1714dc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1714DCu;
    {
        const bool branch_taken_0x1714dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1714E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714DCu;
        // 0x1714e0: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714dc) {
            ctx->pc = 0x171550u;
            goto label_171550;
        }
    }
    ctx->pc = 0x1714E4u;
    // 0x1714e4: 0x0  nop
    ctx->pc = 0x1714e4u;
    // NOP
label_1714e8:
    // 0x1714e8: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x1714e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1714ec: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1714ECu;
    {
        const bool branch_taken_0x1714ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1714F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714ECu;
        // 0x1714f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714ec) {
            ctx->pc = 0x171530u;
            goto label_171530;
        }
    }
    ctx->pc = 0x1714F4u;
    // 0x1714f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1714f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714f8: 0xc05c560  jal         func_171580
    ctx->pc = 0x1714F8u;
    SET_GPR_U32(ctx, 31, 0x171500u);
    ctx->pc = 0x1714FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1714F8u;
    // 0x1714fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171580u, 0x1714F8u, 0x171500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171500u;
label_171500:
    // 0x171500: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x171500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171504: 0x2b02021  addu        $a0, $s5, $s0
    ctx->pc = 0x171504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x171508: 0xc05c560  jal         func_171580
    ctx->pc = 0x171508u;
    SET_GPR_U32(ctx, 31, 0x171510u);
    ctx->pc = 0x17150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171508u;
    // 0x17150c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171580u, 0x171508u, 0x171510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171510u;
label_171510:
    // 0x171510: 0x2d22821  addu        $a1, $s6, $s2
    ctx->pc = 0x171510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x171514: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x171514u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x171518: 0x2333023  subu        $a2, $s1, $s3
    ctx->pc = 0x171518u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x17151c: 0xc05c560  jal         func_171580
    ctx->pc = 0x17151Cu;
    SET_GPR_U32(ctx, 31, 0x171524u);
    ctx->pc = 0x171520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17151Cu;
    // 0x171520: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171580u, 0x17151Cu, 0x171524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171524u;
label_171524:
    // 0x171524: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x171524u;
    {
        const bool branch_taken_0x171524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171524u;
        // 0x171528: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171524) {
            ctx->pc = 0x171550u;
            goto label_171550;
        }
    }
    ctx->pc = 0x17152Cu;
    // 0x17152c: 0x0  nop
    ctx->pc = 0x17152cu;
    // NOP
label_171530:
    // 0x171530: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x171530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171534: 0xc05c560  jal         func_171580
    ctx->pc = 0x171534u;
    SET_GPR_U32(ctx, 31, 0x17153Cu);
    ctx->pc = 0x171538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171534u;
    // 0x171538: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171580u, 0x171534u, 0x17153Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17153Cu;
label_17153c:
    // 0x17153c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17153cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171540: 0x2b02021  addu        $a0, $s5, $s0
    ctx->pc = 0x171540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x171544: 0xc05c560  jal         func_171580
    ctx->pc = 0x171544u;
    SET_GPR_U32(ctx, 31, 0x17154Cu);
    ctx->pc = 0x171548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171544u;
    // 0x171548: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171580u, 0x171544u, 0x17154Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17154Cu;
label_17154c:
    // 0x17154c: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x17154cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_171550:
    // 0x171550: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171554: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x171554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171558: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x171558u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17155c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17155cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x171560: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x171560u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171564: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x171564u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x171568: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x171568u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17156c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17156cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x171570: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x171570u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x171574: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x171574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x171578: 0x3e00008  jr          $ra
    ctx->pc = 0x171578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171578u;
        // 0x17157c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171580u;
}
