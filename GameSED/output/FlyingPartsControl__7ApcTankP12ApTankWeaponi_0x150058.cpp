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

// Function: FlyingPartsControl__7ApcTankP12ApTankWeaponi
// Address: 0x150058 - 0x15028c
void FlyingPartsControl__7ApcTankP12ApTankWeaponi_0x150058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FlyingPartsControl__7ApcTankP12ApTankWeaponi_0x150058");
#endif

    switch (ctx->pc) {
        case 0x15023cu: goto label_15023c;
        case 0x150268u: goto label_150268;
        default: break;
    }

    ctx->pc = 0x150058u;

    // 0x150058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x150058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15005c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15005cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x150060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150064: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x150064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x150068: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x150068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15006c: 0x8e0201b0  lw          $v0, 0x1B0($s0)
    ctx->pc = 0x15006cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x150070: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x150070u;
    {
        const bool branch_taken_0x150070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150070u;
        // 0x150074: 0x8ca40010  lw          $a0, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150070) {
            ctx->pc = 0x150124u;
            goto label_150124;
        }
    }
    ctx->pc = 0x150078u;
    // 0x150078: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x150078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x15007c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x15007cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150080: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x150080u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150084: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x150084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x150088: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150088u;
    {
        const bool branch_taken_0x150088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150088u;
        // 0x15008c: 0x24a70030  addiu       $a3, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150088) {
            ctx->pc = 0x150098u;
            goto label_150098;
        }
    }
    ctx->pc = 0x150090u;
    // 0x150090: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x150090u;
    {
        const bool branch_taken_0x150090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150090u;
        // 0x150094: 0x34098000  ori         $t1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x150090) {
            ctx->pc = 0x150104u;
            goto label_150104;
        }
    }
    ctx->pc = 0x150098u;
label_150098:
    // 0x150098: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x150098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x15009c: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x15009Cu;
    {
        const bool branch_taken_0x15009c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15009c) {
            ctx->pc = 0x1500A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15009Cu;
            // 0x1500a0: 0x8e020264  lw          $v0, 0x264($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150108u;
            goto label_150108;
        }
    }
    ctx->pc = 0x1500A4u;
    // 0x1500a4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1500a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1500a8: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1500A8u;
    {
        const bool branch_taken_0x1500a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1500a8) {
            ctx->pc = 0x1500ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1500A8u;
            // 0x1500ac: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1500CCu;
            goto label_1500cc;
        }
    }
    ctx->pc = 0x1500B0u;
    // 0x1500b0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1500B0u;
    {
        const bool branch_taken_0x1500b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1500B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1500B0u;
        // 0x1500b4: 0x24030096  addiu       $v1, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1500b0) {
            ctx->pc = 0x1500C8u;
            goto label_1500c8;
        }
    }
    ctx->pc = 0x1500B8u;
    // 0x1500b8: 0xaca3003c  sw          $v1, 0x3C($a1)
    ctx->pc = 0x1500b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
    // 0x1500bc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1500bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1500c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1500c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1500c4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1500c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_1500c8:
    // 0x1500c8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1500c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1500cc:
    // 0x1500cc: 0x8d020020  lw          $v0, 0x20($t0)
    ctx->pc = 0x1500ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x1500d0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1500d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1500d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1500D4u;
    {
        const bool branch_taken_0x1500d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1500D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1500D4u;
        // 0x1500d8: 0x3480a  movz        $t1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1500d4) {
            ctx->pc = 0x150104u;
            goto label_150104;
        }
    }
    ctx->pc = 0x1500DCu;
    // 0x1500dc: 0x8d02003c  lw          $v0, 0x3C($t0)
    ctx->pc = 0x1500dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x1500e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1500E0u;
    {
        const bool branch_taken_0x1500e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1500E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1500E0u;
        // 0x1500e4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1500e0) {
            ctx->pc = 0x150100u;
            goto label_150100;
        }
    }
    ctx->pc = 0x1500E8u;
    // 0x1500e8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1500e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1500ec: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1500ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1500f0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1500f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1500f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1500F4u;
    {
        const bool branch_taken_0x1500f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1500F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1500F4u;
        // 0x1500f8: 0xad03003c  sw          $v1, 0x3C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1500f4) {
            ctx->pc = 0x150104u;
            goto label_150104;
        }
    }
    ctx->pc = 0x1500FCu;
    // 0x1500fc: 0x0  nop
    ctx->pc = 0x1500fcu;
    // NOP
label_150100:
    // 0x150100: 0xad02003c  sw          $v0, 0x3C($t0)
    ctx->pc = 0x150100u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 2));
label_150104:
    // 0x150104: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x150104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_150108:
    // 0x150108: 0x30428800  andi        $v0, $v0, 0x8800
    ctx->pc = 0x150108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)34816);
    // 0x15010c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15010Cu;
    {
        const bool branch_taken_0x15010c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15010Cu;
        // 0x150110: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15010c) {
            ctx->pc = 0x150124u;
            goto label_150124;
        }
    }
    ctx->pc = 0x150114u;
    // 0x150114: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x150114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x150118: 0x90620c00  lbu         $v0, 0xC00($v1)
    ctx->pc = 0x150118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3072)));
    // 0x15011c: 0x38420025  xori        $v0, $v0, 0x25
    ctx->pc = 0x15011cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)37);
    // 0x150120: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x150120u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_150124:
    // 0x150124: 0x8e030840  lw          $v1, 0x840($s0)
    ctx->pc = 0x150124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2112)));
    // 0x150128: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x150128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15012c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15012Cu;
    {
        const bool branch_taken_0x15012c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x150130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15012Cu;
        // 0x150130: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15012c) {
            ctx->pc = 0x150170u;
            goto label_150170;
        }
    }
    ctx->pc = 0x150134u;
    // 0x150134: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x150134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x150138: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x150138u;
    {
        const bool branch_taken_0x150138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150138) {
            ctx->pc = 0x15013Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150138u;
            // 0x15013c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150150u;
            goto label_150150;
        }
    }
    ctx->pc = 0x150140u;
    // 0x150140: 0x4600028  bltz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x150140u;
    {
        const bool branch_taken_0x150140 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x150140) {
            ctx->pc = 0x1501E4u;
            goto label_1501e4;
        }
    }
    ctx->pc = 0x150148u;
    // 0x150148: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x150148u;
    {
        const bool branch_taken_0x150148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150148) {
            ctx->pc = 0x150160u;
            goto label_150160;
        }
    }
    ctx->pc = 0x150150u;
label_150150:
    // 0x150150: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x150150u;
    {
        const bool branch_taken_0x150150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x150150) {
            ctx->pc = 0x150154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150150u;
            // 0x150154: 0x8e020264  lw          $v0, 0x264($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1501B0u;
            goto label_1501b0;
        }
    }
    ctx->pc = 0x150158u;
    // 0x150158: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x150158u;
    {
        const bool branch_taken_0x150158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150158) {
            ctx->pc = 0x1501E4u;
            goto label_1501e4;
        }
    }
    ctx->pc = 0x150160u;
label_150160:
    // 0x150160: 0x54c00020  bnel        $a2, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x150160u;
    {
        const bool branch_taken_0x150160 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x150160) {
            ctx->pc = 0x150164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150160u;
            // 0x150164: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1501E4u;
            goto label_1501e4;
        }
    }
    ctx->pc = 0x150168u;
    // 0x150168: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x150168u;
    {
        const bool branch_taken_0x150168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150168) {
            ctx->pc = 0x1501E4u;
            goto label_1501e4;
        }
    }
    ctx->pc = 0x150170u;
label_150170:
    // 0x150170: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x150170u;
    {
        const bool branch_taken_0x150170 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x150170) {
            ctx->pc = 0x150174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150170u;
            // 0x150174: 0x8e0203b0  lw          $v0, 0x3B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150180u;
            goto label_150180;
        }
    }
    ctx->pc = 0x150178u;
    // 0x150178: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x150178u;
    {
        const bool branch_taken_0x150178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150178u;
        // 0x15017c: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150178) {
            ctx->pc = 0x1501E4u;
            goto label_1501e4;
        }
    }
    ctx->pc = 0x150180u;
label_150180:
    // 0x150180: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x150180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x150184: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x150184u;
    {
        const bool branch_taken_0x150184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150184u;
        // 0x150188: 0x3c030021  lui         $v1, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150184) {
            ctx->pc = 0x1501E4u;
            goto label_1501e4;
        }
    }
    ctx->pc = 0x15018Cu;
    // 0x15018c: 0x26020820  addiu       $v0, $s0, 0x820
    ctx->pc = 0x15018cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x150190: 0x24639b90  addiu       $v1, $v1, -0x6470
    ctx->pc = 0x150190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941584));
    // 0x150194: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x150194u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150198: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x150198u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15019c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15019cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1501a0: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1501a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1501a4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1501A4u;
    {
        const bool branch_taken_0x1501a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1501a4) {
            ctx->pc = 0x1501E4u;
            goto label_1501e4;
        }
    }
    ctx->pc = 0x1501ACu;
    // 0x1501ac: 0x0  nop
    ctx->pc = 0x1501acu;
    // NOP
label_1501b0:
    // 0x1501b0: 0x30428800  andi        $v0, $v0, 0x8800
    ctx->pc = 0x1501b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)34816);
    // 0x1501b4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1501B4u;
    {
        const bool branch_taken_0x1501b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1501B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1501B4u;
        // 0x1501b8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1501b4) {
            ctx->pc = 0x1501E4u;
            goto label_1501e4;
        }
    }
    ctx->pc = 0x1501BCu;
    // 0x1501bc: 0x8e0203b0  lw          $v0, 0x3B0($s0)
    ctx->pc = 0x1501bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x1501c0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1501c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1501c4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1501C4u;
    {
        const bool branch_taken_0x1501c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1501c4) {
            ctx->pc = 0x1501E4u;
            goto label_1501e4;
        }
    }
    ctx->pc = 0x1501CCu;
    // 0x1501cc: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1501CCu;
    {
        const bool branch_taken_0x1501cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1501D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1501CCu;
        // 0x1501d0: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1501cc) {
            ctx->pc = 0x1501E4u;
            goto label_1501e4;
        }
    }
    ctx->pc = 0x1501D4u;
    // 0x1501d4: 0x8e020844  lw          $v0, 0x844($s0)
    ctx->pc = 0x1501d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2116)));
    // 0x1501d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1501d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1501dc: 0xae020844  sw          $v0, 0x844($s0)
    ctx->pc = 0x1501dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2116), GPR_U32(ctx, 2));
    // 0x1501e0: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x1501e0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1501e4:
    // 0x1501e4: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1501E4u;
    {
        const bool branch_taken_0x1501e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1501E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1501E4u;
        // 0x1501e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1501e4) {
            ctx->pc = 0x150278u;
            goto label_150278;
        }
    }
    ctx->pc = 0x1501ECu;
    // 0x1501ec: 0x12220016  beq         $s1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1501ECu;
    {
        const bool branch_taken_0x1501ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1501F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1501ECu;
        // 0x1501f0: 0x2a220003  slti        $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1501ec) {
            ctx->pc = 0x150248u;
            goto label_150248;
        }
    }
    ctx->pc = 0x1501F4u;
    // 0x1501f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1501F4u;
    {
        const bool branch_taken_0x1501f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1501F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1501F4u;
        // 0x1501f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1501f4) {
            ctx->pc = 0x150210u;
            goto label_150210;
        }
    }
    ctx->pc = 0x1501FCu;
    // 0x1501fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1501fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150200: 0x52220007  beql        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x150200u;
    {
        const bool branch_taken_0x150200 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x150200) {
            ctx->pc = 0x150204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150200u;
            // 0x150204: 0x8e0303b0  lw          $v1, 0x3B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150220u;
            goto label_150220;
        }
    }
    ctx->pc = 0x150208u;
    // 0x150208: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x150208u;
    {
        const bool branch_taken_0x150208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150208u;
        // 0x15020c: 0xae110840  sw          $s1, 0x840($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150208) {
            ctx->pc = 0x150278u;
            goto label_150278;
        }
    }
    ctx->pc = 0x150210u;
label_150210:
    // 0x150210: 0x12220017  beq         $s1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x150210u;
    {
        const bool branch_taken_0x150210 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x150214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150210u;
        // 0x150214: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150210) {
            ctx->pc = 0x150270u;
            goto label_150270;
        }
    }
    ctx->pc = 0x150218u;
    // 0x150218: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x150218u;
    {
        const bool branch_taken_0x150218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150218u;
        // 0x15021c: 0xae110840  sw          $s1, 0x840($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150218) {
            ctx->pc = 0x150278u;
            goto label_150278;
        }
    }
    ctx->pc = 0x150220u;
label_150220:
    // 0x150220: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x150220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x150224: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150224u;
    {
        const bool branch_taken_0x150224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150224u;
        // 0x150228: 0x2402efff  addiu       $v0, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150224) {
            ctx->pc = 0x150234u;
            goto label_150234;
        }
    }
    ctx->pc = 0x15022Cu;
    // 0x15022c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15022cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x150230: 0xae0203b0  sw          $v0, 0x3B0($s0)
    ctx->pc = 0x150230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
label_150234:
    // 0x150234: 0xc05967c  jal         func_1659F0
    ctx->pc = 0x150234u;
    SET_GPR_U32(ctx, 31, 0x15023Cu);
    ctx->pc = 0x150238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150234u;
    // 0x150238: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1659F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659F0u, 0x150234u, 0x15023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15023Cu;
label_15023c:
    // 0x15023c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15023Cu;
    {
        const bool branch_taken_0x15023c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15023Cu;
        // 0x150240: 0xae110840  sw          $s1, 0x840($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15023c) {
            ctx->pc = 0x150278u;
            goto label_150278;
        }
    }
    ctx->pc = 0x150244u;
    // 0x150244: 0x0  nop
    ctx->pc = 0x150244u;
    // NOP
label_150248:
    // 0x150248: 0x8e0303b0  lw          $v1, 0x3B0($s0)
    ctx->pc = 0x150248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x15024c: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x15024cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x150250: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x150250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x150254: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x150254u;
    {
        const bool branch_taken_0x150254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150254u;
        // 0x150258: 0x651025  or          $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150254) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x15025Cu;
    // 0x15025c: 0xae0203b0  sw          $v0, 0x3B0($s0)
    ctx->pc = 0x15025cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
label_150260:
    // 0x150260: 0xc05967c  jal         func_1659F0
    ctx->pc = 0x150260u;
    SET_GPR_U32(ctx, 31, 0x150268u);
    ctx->pc = 0x150264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150260u;
    // 0x150264: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1659F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659F0u, 0x150260u, 0x150268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150268u;
label_150268:
    // 0x150268: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x150268u;
    {
        const bool branch_taken_0x150268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150268u;
        // 0x15026c: 0xae110840  sw          $s1, 0x840($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150268) {
            ctx->pc = 0x150278u;
            goto label_150278;
        }
    }
    ctx->pc = 0x150270u;
label_150270:
    // 0x150270: 0xae020844  sw          $v0, 0x844($s0)
    ctx->pc = 0x150270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2116), GPR_U32(ctx, 2));
    // 0x150274: 0xae110840  sw          $s1, 0x840($s0)
    ctx->pc = 0x150274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 17));
label_150278:
    // 0x150278: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x150278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15027c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15027cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x150280: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x150280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150284: 0x3e00008  jr          $ra
    ctx->pc = 0x150284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150284u;
        // 0x150288: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15028Cu;
}
