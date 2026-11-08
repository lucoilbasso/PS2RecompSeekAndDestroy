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

// Function: __moddi3
// Address: 0x1c88c8 - 0x1c8f58
void ps2___moddi3_0x1c88c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___moddi3_0x1c88c8");
#endif

    ctx->pc = 0x1c88c8u;

    // 0x1c88c8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1c88c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c88cc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c88ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c88d0: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x1c88d0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x1c88d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c88d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c88d8: 0xa203c  dsll32      $a0, $t2, 0
    ctx->pc = 0x1c88d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1c88dc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1c88dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1c88e0: 0x4810016  bgez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C88E0u;
    {
        const bool branch_taken_0x1c88e0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1C88E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88E0u;
        // 0x1c88e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88e0) {
            ctx->pc = 0x1C893Cu;
            goto label_1c893c;
        }
    }
    ctx->pc = 0x1C88E8u;
    // 0x1c88e8: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x1c88e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1c88ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c88ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c88f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c88f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c88f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c88f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c88f8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1c88f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1c88fc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1c88fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1c8900: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c8900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c8904: 0x41823  negu        $v1, $a0
    ctx->pc = 0x1c8904u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1c8908: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c8908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c890c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1c890cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8910: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c8910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c8914: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1c8914u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1c8918: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1c8918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c891c: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1c891cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1c8920: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c8920u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c8924: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x1c8924u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1c8928: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c8928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c892c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c892cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c8930: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c8930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c8934: 0xc34025  or          $t0, $a2, $v1
    ctx->pc = 0x1c8934u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c8938: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x1c8938u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
label_1c893c:
    // 0x1c893c: 0x5203f  dsra32      $a0, $a1, 0
    ctx->pc = 0x1c893cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1c8940: 0x4810013  bgez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C8940u;
    {
        const bool branch_taken_0x1c8940 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1C8944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8940u;
        // 0x1c8944: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8940) {
            ctx->pc = 0x1C8990u;
            goto label_1c8990;
        }
    }
    ctx->pc = 0x1C8948u;
    // 0x1c8948: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1c8948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1c894c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c894cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c8950: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1c8950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8954: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1c8954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1c8958: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1c8958u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1c895c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c895cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8960: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c8960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c8964: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c8964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c8968: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x1c8968u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1c896c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c896cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c8970: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1c8970u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1c8974: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x1c8974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1c8978: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1c8978u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c897c: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x1c897cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1c8980: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1c8980u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c8984: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1c8984u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c8988: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c8988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c898c: 0xe42825  or          $a1, $a3, $a0
    ctx->pc = 0x1c898cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_1c8990:
    // 0x1c8990: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x1c8990u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1c8994: 0x8683c  dsll32      $t5, $t0, 0
    ctx->pc = 0x1c8994u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1c8998: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x1c8998u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x1c899c: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x1c899cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1c89a0: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x1c89a0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x1c89a4: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x1c89a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1c89a8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1c89a8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1c89ac: 0x152000b0  bnez        $t1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x1C89ACu;
    {
        const bool branch_taken_0x1c89ac = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C89B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89ACu;
        // 0x1c89b0: 0x3a0c82d  daddu       $t9, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c89ac) {
            ctx->pc = 0x1C8C70u;
            goto label_1c8c70;
        }
    }
    ctx->pc = 0x1C89B4u;
    // 0x1c89b4: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x1c89b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c89b8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C89B8u;
    {
        const bool branch_taken_0x1c89b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C89BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89B8u;
        // 0x1c89bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c89b8) {
            ctx->pc = 0x1C8A38u;
            goto label_1c8a38;
        }
    }
    ctx->pc = 0x1C89C0u;
    // 0x1c89c0: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1c89c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c89c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C89C4u;
    {
        const bool branch_taken_0x1c89c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C89C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89C4u;
        // 0x1c89c8: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c89c4) {
            ctx->pc = 0x1C89E0u;
            goto label_1c89e0;
        }
    }
    ctx->pc = 0x1C89CCu;
    // 0x1c89cc: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x1c89ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c89d0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c89d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c89d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C89D4u;
    {
        const bool branch_taken_0x1c89d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C89D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89D4u;
        // 0x1c89d8: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c89d4) {
            ctx->pc = 0x1C89F4u;
            goto label_1c89f4;
        }
    }
    ctx->pc = 0x1C89DCu;
    // 0x1c89dc: 0x0  nop
    ctx->pc = 0x1c89dcu;
    // NOP
label_1c89e0:
    // 0x1c89e0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1c89e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c89e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c89e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c89e8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c89e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c89ec: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1c89ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c89f0: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1c89f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1c89f4:
    // 0x1c89f4: 0x871806  srlv        $v1, $a3, $a0
    ctx->pc = 0x1c89f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x1c89f8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c89f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c89fc: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c89fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c8a00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8a04: 0x9042bce0  lbu         $v0, -0x4320($v0)
    ctx->pc = 0x1c8a04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950112)));
    // 0x1c8a08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c8a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c8a0c: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1c8a0cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c8a10: 0x11800006  beqz        $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8A10u;
    {
        const bool branch_taken_0x1c8a10 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A10u;
        // 0x1c8a14: 0xac1023  subu        $v0, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a10) {
            ctx->pc = 0x1C8A2Cu;
            goto label_1c8a2c;
        }
    }
    ctx->pc = 0x1C8A18u;
    // 0x1c8a18: 0x18a1804  sllv        $v1, $t2, $t4
    ctx->pc = 0x1c8a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c8a1c: 0x4d1006  srlv        $v0, $t5, $v0
    ctx->pc = 0x1c8a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
    // 0x1c8a20: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x1c8a20u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c8a24: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1c8a24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c8a28: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x1c8a28u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
label_1c8a2c:
    // 0x1c8a2c: 0x73402  srl         $a2, $a3, 16
    ctx->pc = 0x1c8a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1c8a30: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1C8A30u;
    {
        const bool branch_taken_0x1c8a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A30u;
        // 0x1c8a34: 0x30e9ffff  andi        $t1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a30) {
            ctx->pc = 0x1C8B98u;
            goto label_1c8b98;
        }
    }
    ctx->pc = 0x1C8A38u;
label_1c8a38:
    // 0x1c8a38: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C8A38u;
    {
        const bool branch_taken_0x1c8a38 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A38u;
        // 0x1c8a3c: 0x47102b  sltu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a38) {
            ctx->pc = 0x1C8A60u;
            goto label_1c8a60;
        }
    }
    ctx->pc = 0x1C8A40u;
    // 0x1c8a40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c8a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8a44: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C8A44u;
    {
        const bool branch_taken_0x1c8a44 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8a44) {
            ctx->pc = 0x1C8A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8A44u;
            // 0x1c8a48: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8A4Cu;
            goto label_1c8a4c;
        }
    }
    ctx->pc = 0x1C8A4Cu;
label_1c8a4c:
    // 0x1c8a4c: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x1c8a4cu;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c8a50: 0x1012  mflo        $v0
    ctx->pc = 0x1c8a50u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c8a54: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c8a54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a58: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c8a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1c8a5c: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1c8a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1c8a60:
    // 0x1c8a60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8A60u;
    {
        const bool branch_taken_0x1c8a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A60u;
        // 0x1c8a64: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a60) {
            ctx->pc = 0x1C8A78u;
            goto label_1c8a78;
        }
    }
    ctx->pc = 0x1C8A68u;
    // 0x1c8a68: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x1c8a68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c8a6c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c8a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c8a70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8A70u;
    {
        const bool branch_taken_0x1c8a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A70u;
        // 0x1c8a74: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a70) {
            ctx->pc = 0x1C8A8Cu;
            goto label_1c8a8c;
        }
    }
    ctx->pc = 0x1C8A78u;
label_1c8a78:
    // 0x1c8a78: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1c8a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c8a7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c8a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c8a80: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c8a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c8a84: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1c8a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c8a88: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1c8a88u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1c8a8c:
    // 0x1c8a8c: 0x871806  srlv        $v1, $a3, $a0
    ctx->pc = 0x1c8a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x1c8a90: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c8a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c8a94: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c8a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c8a98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8a9c: 0x9042bce0  lbu         $v0, -0x4320($v0)
    ctx->pc = 0x1c8a9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950112)));
    // 0x1c8aa0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c8aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c8aa4: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1c8aa4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c8aa8: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8AA8u;
    {
        const bool branch_taken_0x1c8aa8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8AA8u;
        // 0x1c8aac: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8aa8) {
            ctx->pc = 0x1C8AC0u;
            goto label_1c8ac0;
        }
    }
    ctx->pc = 0x1C8AB0u;
    // 0x1c8ab0: 0x1475023  subu        $t2, $t2, $a3
    ctx->pc = 0x1c8ab0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1c8ab4: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x1c8ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1c8ab8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1C8AB8u;
    {
        const bool branch_taken_0x1c8ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8AB8u;
        // 0x1c8abc: 0x30eeffff  andi        $t6, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ab8) {
            ctx->pc = 0x1C8B90u;
            goto label_1c8b90;
        }
    }
    ctx->pc = 0x1C8AC0u;
label_1c8ac0:
    // 0x1c8ac0: 0x18a1804  sllv        $v1, $t2, $t4
    ctx->pc = 0x1c8ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c8ac4: 0x1ed1006  srlv        $v0, $t5, $t7
    ctx->pc = 0x1c8ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x1c8ac8: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x1c8ac8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c8acc: 0x1ea2006  srlv        $a0, $t2, $t7
    ctx->pc = 0x1c8accu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x1c8ad0: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1c8ad0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c8ad4: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x1c8ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c8ad8: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x1c8ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1c8adc: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x1c8adcu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1c8ae0: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1c8ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1c8ae4: 0x30eeffff  andi        $t6, $a3, 0xFFFF
    ctx->pc = 0x1c8ae4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1c8ae8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1c8ae8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8aec: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C8AECu;
    {
        const bool branch_taken_0x1c8aec = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8aec) {
            ctx->pc = 0x1C8AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8AECu;
            // 0x1c8af0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8AF4u;
            goto label_1c8af4;
        }
    }
    ctx->pc = 0x1C8AF4u;
label_1c8af4:
    // 0x1c8af4: 0x1012  mflo        $v0
    ctx->pc = 0x1c8af4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c8af8: 0x1810  mfhi        $v1
    ctx->pc = 0x1c8af8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c8afc: 0x4e4018  mult        $t0, $v0, $t6
    ctx->pc = 0x1c8afcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c8b00: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c8b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c8b04: 0x643025  or          $a2, $v1, $a0
    ctx->pc = 0x1c8b04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c8b08: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x1c8b08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c8b0c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8B0Cu;
    {
        const bool branch_taken_0x1c8b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B0Cu;
        // 0x1c8b10: 0x1c0782d  daddu       $t7, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8b0c) {
            ctx->pc = 0x1C8B38u;
            goto label_1c8b38;
        }
    }
    ctx->pc = 0x1C8B14u;
    // 0x1c8b14: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1c8b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1c8b18: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x1c8b18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c8b1c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C8B1Cu;
    {
        const bool branch_taken_0x1c8b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8b1c) {
            ctx->pc = 0x1C8B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8B1Cu;
            // 0x1c8b20: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8B3Cu;
            goto label_1c8b3c;
        }
    }
    ctx->pc = 0x1C8B24u;
    // 0x1c8b24: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x1c8b24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c8b28: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1c8b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1c8b2c: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1c8b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c8b30: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1c8b30u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1c8b34: 0x0  nop
    ctx->pc = 0x1c8b34u;
    // NOP
label_1c8b38:
    // 0x1c8b38: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x1c8b38u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1c8b3c:
    // 0x1c8b3c: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1c8b3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1c8b40: 0xc9001b  divu        $zero, $a2, $t1
    ctx->pc = 0x1c8b40u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x1c8b44: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C8B44u;
    {
        const bool branch_taken_0x1c8b44 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8b44) {
            ctx->pc = 0x1C8B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8B44u;
            // 0x1c8b48: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8B4Cu;
            goto label_1c8b4c;
        }
    }
    ctx->pc = 0x1C8B4Cu;
label_1c8b4c:
    // 0x1c8b4c: 0x1012  mflo        $v0
    ctx->pc = 0x1c8b4cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c8b50: 0x1810  mfhi        $v1
    ctx->pc = 0x1c8b50u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c8b54: 0x4f4018  mult        $t0, $v0, $t7
    ctx->pc = 0x1c8b54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c8b58: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c8b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c8b5c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1c8b5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c8b60: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1c8b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c8b64: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8B64u;
    {
        const bool branch_taken_0x1c8b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B64u;
        // 0x1c8b68: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8b64) {
            ctx->pc = 0x1C8B90u;
            goto label_1c8b90;
        }
    }
    ctx->pc = 0x1C8B6Cu;
    // 0x1c8b6c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1c8b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c8b70: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1c8b70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c8b74: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8B74u;
    {
        const bool branch_taken_0x1c8b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B74u;
        // 0x1c8b78: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8b74) {
            ctx->pc = 0x1C8B90u;
            goto label_1c8b90;
        }
    }
    ctx->pc = 0x1C8B7Cu;
    // 0x1c8b7c: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1c8b7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c8b80: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1c8b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c8b84: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1c8b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c8b88: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1c8b88u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x1c8b8c: 0x885023  subu        $t2, $a0, $t0
    ctx->pc = 0x1c8b8cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1c8b90:
    // 0x1c8b90: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c8b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8b94: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x1c8b94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_1c8b98:
    // 0x1c8b98: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x1c8b98u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x1c8b9c: 0xd2402  srl         $a0, $t5, 16
    ctx->pc = 0x1c8b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x1c8ba0: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C8BA0u;
    {
        const bool branch_taken_0x1c8ba0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8ba0) {
            ctx->pc = 0x1C8BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8BA0u;
            // 0x1c8ba4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8BA8u;
            goto label_1c8ba8;
        }
    }
    ctx->pc = 0x1C8BA8u;
label_1c8ba8:
    // 0x1c8ba8: 0x1012  mflo        $v0
    ctx->pc = 0x1c8ba8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c8bac: 0x1810  mfhi        $v1
    ctx->pc = 0x1c8bacu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c8bb0: 0x494018  mult        $t0, $v0, $t1
    ctx->pc = 0x1c8bb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c8bb4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c8bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c8bb8: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1c8bb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c8bbc: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1c8bbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c8bc0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8BC0u;
    {
        const bool branch_taken_0x1c8bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8bc0) {
            ctx->pc = 0x1C8BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8BC0u;
            // 0x1c8bc4: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8BECu;
            goto label_1c8bec;
        }
    }
    ctx->pc = 0x1C8BC8u;
    // 0x1c8bc8: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1c8bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c8bcc: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x1c8bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c8bd0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8BD0u;
    {
        const bool branch_taken_0x1c8bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8bd0) {
            ctx->pc = 0x1C8BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8BD0u;
            // 0x1c8bd4: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8BECu;
            goto label_1c8bec;
        }
    }
    ctx->pc = 0x1C8BD8u;
    // 0x1c8bd8: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1c8bd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c8bdc: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x1c8bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c8be0: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1c8be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c8be4: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x1c8be4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1c8be8: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x1c8be8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1c8bec:
    // 0x1c8bec: 0x31a4ffff  andi        $a0, $t5, 0xFFFF
    ctx->pc = 0x1c8becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x1c8bf0: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x1c8bf0u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x1c8bf4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C8BF4u;
    {
        const bool branch_taken_0x1c8bf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8bf4) {
            ctx->pc = 0x1C8BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8BF4u;
            // 0x1c8bf8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8BFCu;
            goto label_1c8bfc;
        }
    }
    ctx->pc = 0x1C8BFCu;
label_1c8bfc:
    // 0x1c8bfc: 0x1012  mflo        $v0
    ctx->pc = 0x1c8bfcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c8c00: 0x1810  mfhi        $v1
    ctx->pc = 0x1c8c00u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c8c04: 0x494018  mult        $t0, $v0, $t1
    ctx->pc = 0x1c8c04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c8c08: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c8c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c8c0c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1c8c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c8c10: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1c8c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c8c14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8C14u;
    {
        const bool branch_taken_0x1c8c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8c14) {
            ctx->pc = 0x1C8C38u;
            goto label_1c8c38;
        }
    }
    ctx->pc = 0x1C8C1Cu;
    // 0x1c8c1c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1c8c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c8c20: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1c8c20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c8c24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8C24u;
    {
        const bool branch_taken_0x1c8c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C24u;
        // 0x1c8c28: 0x88102b  sltu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c24) {
            ctx->pc = 0x1C8C38u;
            goto label_1c8c38;
        }
    }
    ctx->pc = 0x1C8C2Cu;
    // 0x1c8c2c: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1c8c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c8c30: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1c8c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c8c34: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1c8c34u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1c8c38:
    // 0x1c8c38: 0x132000ac  beqz        $t9, . + 4 + (0xAC << 2)
    ctx->pc = 0x1C8C38u;
    {
        const bool branch_taken_0x1c8c38 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C38u;
        // 0x1c8c3c: 0x886823  subu        $t5, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c38) {
            ctx->pc = 0x1C8EECu;
            goto label_1c8eec;
        }
    }
    ctx->pc = 0x1C8C40u;
    // 0x1c8c40: 0x18d1006  srlv        $v0, $t5, $t4
    ctx->pc = 0x1c8c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c8c44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c8c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8c48: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c8c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c8c4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c8c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c8c50: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c8c50u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c8c54: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c8c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c8c58: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c8c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8c5c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c8c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c8c60: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1c8c60u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1c8c64: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1C8C64u;
    {
        const bool branch_taken_0x1c8c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C64u;
        // 0x1c8c68: 0x1635824  and         $t3, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c64) {
            ctx->pc = 0x1C8EE8u;
            goto label_1c8ee8;
        }
    }
    ctx->pc = 0x1C8C6Cu;
    // 0x1c8c6c: 0x0  nop
    ctx->pc = 0x1c8c6cu;
    // NOP
label_1c8c70:
    // 0x1c8c70: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x1c8c70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c8c74: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C8C74u;
    {
        const bool branch_taken_0x1c8c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C74u;
        // 0x1c8c78: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c74) {
            ctx->pc = 0x1C8CB0u;
            goto label_1c8cb0;
        }
    }
    ctx->pc = 0x1C8C7Cu;
    // 0x1c8c7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c8c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8c80: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c8c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c8c84: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x1c8c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x1c8c88: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c8c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c8c8c: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c8c8cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c8c90: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1c8c90u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1c8c94: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x1c8c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1c8c98: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c8c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8c9c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c8c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c8ca0: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c8ca0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c8ca4: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1c8ca4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1c8ca8: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1C8CA8u;
    {
        const bool branch_taken_0x1c8ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8CA8u;
        // 0x1c8cac: 0xffab0000  sd          $t3, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ca8) {
            ctx->pc = 0x1C8EECu;
            goto label_1c8eec;
        }
    }
    ctx->pc = 0x1C8CB0u;
label_1c8cb0:
    // 0x1c8cb0: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1c8cb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c8cb4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8CB4u;
    {
        const bool branch_taken_0x1c8cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8CB4u;
        // 0x1c8cb8: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8cb4) {
            ctx->pc = 0x1C8CD0u;
            goto label_1c8cd0;
        }
    }
    ctx->pc = 0x1C8CBCu;
    // 0x1c8cbc: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x1c8cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c8cc0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c8cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c8cc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C8CC4u;
    {
        const bool branch_taken_0x1c8cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8CC4u;
        // 0x1c8cc8: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8cc4) {
            ctx->pc = 0x1C8CE4u;
            goto label_1c8ce4;
        }
    }
    ctx->pc = 0x1C8CCCu;
    // 0x1c8ccc: 0x0  nop
    ctx->pc = 0x1c8cccu;
    // NOP
label_1c8cd0:
    // 0x1c8cd0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1c8cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c8cd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c8cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c8cd8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c8cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c8cdc: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1c8cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c8ce0: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1c8ce0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1c8ce4:
    // 0x1c8ce4: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x1c8ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x1c8ce8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c8ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c8cec: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c8cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c8cf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8cf4: 0x9042bce0  lbu         $v0, -0x4320($v0)
    ctx->pc = 0x1c8cf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950112)));
    // 0x1c8cf8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c8cfc: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1c8cfcu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c8d00: 0x15800019  bnez        $t4, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C8D00u;
    {
        const bool branch_taken_0x1c8d00 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D00u;
        // 0x1c8d04: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d00) {
            ctx->pc = 0x1C8D68u;
            goto label_1c8d68;
        }
    }
    ctx->pc = 0x1C8D08u;
    // 0x1c8d08: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x1c8d08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1c8d0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8D0Cu;
    {
        const bool branch_taken_0x1c8d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D0Cu;
        // 0x1c8d10: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d0c) {
            ctx->pc = 0x1C8D20u;
            goto label_1c8d20;
        }
    }
    ctx->pc = 0x1C8D14u;
    // 0x1c8d14: 0x1a7102b  sltu        $v0, $t5, $a3
    ctx->pc = 0x1c8d14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c8d18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8D18u;
    {
        const bool branch_taken_0x1c8d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D18u;
        // 0x1c8d1c: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d18) {
            ctx->pc = 0x1C8D30u;
            goto label_1c8d30;
        }
    }
    ctx->pc = 0x1C8D20u;
label_1c8d20:
    // 0x1c8d20: 0x1492023  subu        $a0, $t2, $t1
    ctx->pc = 0x1c8d20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1c8d24: 0x1a2182b  sltu        $v1, $t5, $v0
    ctx->pc = 0x1c8d24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c8d28: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x1c8d28u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8d2c: 0x835023  subu        $t2, $a0, $v1
    ctx->pc = 0x1c8d2cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1c8d30:
    // 0x1c8d30: 0x1320006e  beqz        $t9, . + 4 + (0x6E << 2)
    ctx->pc = 0x1C8D30u;
    {
        const bool branch_taken_0x1c8d30 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D30u;
        // 0x1c8d34: 0xd103c  dsll32      $v0, $t5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d30) {
            ctx->pc = 0x1C8EECu;
            goto label_1c8eec;
        }
    }
    ctx->pc = 0x1C8D38u;
    // 0x1c8d38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c8d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8d3c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c8d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c8d40: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c8d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c8d44: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c8d44u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c8d48: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1c8d48u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1c8d4c: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x1c8d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1c8d50: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c8d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8d54: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c8d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c8d58: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c8d58u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c8d5c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1C8D5Cu;
    {
        const bool branch_taken_0x1c8d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D5Cu;
        // 0x1c8d60: 0x1625825  or          $t3, $t3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d5c) {
            ctx->pc = 0x1C8EE8u;
            goto label_1c8ee8;
        }
    }
    ctx->pc = 0x1C8D64u;
    // 0x1c8d64: 0x0  nop
    ctx->pc = 0x1c8d64u;
    // NOP
label_1c8d68:
    // 0x1c8d68: 0x18a2804  sllv        $a1, $t2, $t4
    ctx->pc = 0x1c8d68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c8d6c: 0x1892004  sllv        $a0, $t1, $t4
    ctx->pc = 0x1c8d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c8d70: 0x1e71006  srlv        $v0, $a3, $t7
    ctx->pc = 0x1c8d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 15) & 0x1F));
    // 0x1c8d74: 0x1ed1806  srlv        $v1, $t5, $t7
    ctx->pc = 0x1c8d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x1c8d78: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x1c8d78u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c8d7c: 0x824825  or          $t1, $a0, $v0
    ctx->pc = 0x1c8d7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1c8d80: 0x1ea2006  srlv        $a0, $t2, $t7
    ctx->pc = 0x1c8d80u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x1c8d84: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x1c8d84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c8d88: 0xa35025  or          $t2, $a1, $v1
    ctx->pc = 0x1c8d88u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1c8d8c: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x1c8d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1c8d90: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x1c8d90u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1c8d94: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1c8d94u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1c8d98: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x1c8d98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1c8d9c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C8D9Cu;
    {
        const bool branch_taken_0x1c8d9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8d9c) {
            ctx->pc = 0x1C8DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8D9Cu;
            // 0x1c8da0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8DA4u;
            goto label_1c8da4;
        }
    }
    ctx->pc = 0x1C8DA4u;
label_1c8da4:
    // 0x1c8da4: 0x1012  mflo        $v0
    ctx->pc = 0x1c8da4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c8da8: 0x1810  mfhi        $v1
    ctx->pc = 0x1c8da8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c8dac: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x1c8dacu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8db0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c8db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c8db4: 0x1c54018  mult        $t0, $t6, $a1
    ctx->pc = 0x1c8db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c8db8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c8db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c8dbc: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1c8dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c8dc0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C8DC0u;
    {
        const bool branch_taken_0x1c8dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8dc0) {
            ctx->pc = 0x1C8DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8DC0u;
            // 0x1c8dc4: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8DF4u;
            goto label_1c8df4;
        }
    }
    ctx->pc = 0x1C8DC8u;
    // 0x1c8dc8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c8dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c8dcc: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1c8dccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c8dd0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C8DD0u;
    {
        const bool branch_taken_0x1c8dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DD0u;
        // 0x1c8dd4: 0x25ceffff  addiu       $t6, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8dd0) {
            ctx->pc = 0x1C8DF0u;
            goto label_1c8df0;
        }
    }
    ctx->pc = 0x1C8DD8u;
    // 0x1c8dd8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1c8dd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c8ddc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8DDCu;
    {
        const bool branch_taken_0x1c8ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8ddc) {
            ctx->pc = 0x1C8DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8DDCu;
            // 0x1c8de0: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8DF4u;
            goto label_1c8df4;
        }
    }
    ctx->pc = 0x1C8DE4u;
    // 0x1c8de4: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x1c8de4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x1c8de8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c8de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c8dec: 0x0  nop
    ctx->pc = 0x1c8decu;
    // NOP
label_1c8df0:
    // 0x1c8df0: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x1c8df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1c8df4:
    // 0x1c8df4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C8DF4u;
    {
        const bool branch_taken_0x1c8df4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8df4) {
            ctx->pc = 0x1C8DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8DF4u;
            // 0x1c8df8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8DFCu;
            goto label_1c8dfc;
        }
    }
    ctx->pc = 0x1C8DFCu;
label_1c8dfc:
    // 0x1c8dfc: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1c8dfcu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1c8e00: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1c8e00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1c8e04: 0x1012  mflo        $v0
    ctx->pc = 0x1c8e04u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c8e08: 0x1810  mfhi        $v1
    ctx->pc = 0x1c8e08u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c8e0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c8e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e10: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c8e14: 0xc54018  mult        $t0, $a2, $a1
    ctx->pc = 0x1c8e14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c8e18: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1c8e18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c8e1c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1c8e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c8e20: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1C8E20u;
    {
        const bool branch_taken_0x1c8e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8e20) {
            ctx->pc = 0x1C8E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8E20u;
            // 0x1c8e24: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8E50u;
            goto label_1c8e50;
        }
    }
    ctx->pc = 0x1C8E28u;
    // 0x1c8e28: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1c8e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1c8e2c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x1c8e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c8e30: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8E30u;
    {
        const bool branch_taken_0x1c8e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E30u;
        // 0x1c8e34: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e30) {
            ctx->pc = 0x1C8E4Cu;
            goto label_1c8e4c;
        }
    }
    ctx->pc = 0x1C8E38u;
    // 0x1c8e38: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1c8e38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c8e3c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8E3Cu;
    {
        const bool branch_taken_0x1c8e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8e3c) {
            ctx->pc = 0x1C8E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8E3Cu;
            // 0x1c8e40: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8E50u;
            goto label_1c8e50;
        }
    }
    ctx->pc = 0x1C8E44u;
    // 0x1c8e44: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1c8e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1c8e48: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1c8e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_1c8e4c:
    // 0x1c8e4c: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x1c8e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1c8e50:
    // 0x1c8e50: 0xe1400  sll         $v0, $t6, 16
    ctx->pc = 0x1c8e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x1c8e54: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1c8e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1c8e58: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1c8e58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e5c: 0x470019  multu       $v0, $a3
    ctx->pc = 0x1c8e5cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1c8e60: 0x3010  mfhi        $a2
    ctx->pc = 0x1c8e60u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1c8e64: 0x4012  mflo        $t0
    ctx->pc = 0x1c8e64u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x1c8e68: 0x146182b  sltu        $v1, $t2, $a2
    ctx->pc = 0x1c8e68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1c8e6c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8E6Cu;
    {
        const bool branch_taken_0x1c8e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E6Cu;
        // 0x1c8e70: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e6c) {
            ctx->pc = 0x1C8E88u;
            goto label_1c8e88;
        }
    }
    ctx->pc = 0x1C8E74u;
    // 0x1c8e74: 0x14ca0008  bne         $a2, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8E74u;
    {
        const bool branch_taken_0x1c8e74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 10));
        ctx->pc = 0x1C8E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E74u;
        // 0x1c8e78: 0x1a8102b  sltu        $v0, $t5, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e74) {
            ctx->pc = 0x1C8E98u;
            goto label_1c8e98;
        }
    }
    ctx->pc = 0x1C8E7Cu;
    // 0x1c8e7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8E7Cu;
    {
        const bool branch_taken_0x1c8e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E7Cu;
        // 0x1c8e80: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e7c) {
            ctx->pc = 0x1C8E98u;
            goto label_1c8e98;
        }
    }
    ctx->pc = 0x1C8E84u;
    // 0x1c8e84: 0x0  nop
    ctx->pc = 0x1c8e84u;
    // NOP
label_1c8e88:
    // 0x1c8e88: 0xc92023  subu        $a0, $a2, $t1
    ctx->pc = 0x1c8e88u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1c8e8c: 0x102182b  sltu        $v1, $t0, $v0
    ctx->pc = 0x1c8e8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c8e90: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c8e90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e94: 0x833023  subu        $a2, $a0, $v1
    ctx->pc = 0x1c8e94u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1c8e98:
    // 0x1c8e98: 0x13200014  beqz        $t9, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C8E98u;
    {
        const bool branch_taken_0x1c8e98 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E98u;
        // 0x1c8e9c: 0x1a82023  subu        $a0, $t5, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e98) {
            ctx->pc = 0x1C8EECu;
            goto label_1c8eec;
        }
    }
    ctx->pc = 0x1C8EA0u;
    // 0x1c8ea0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1c8ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1c8ea4: 0x1a4182b  sltu        $v1, $t5, $a0
    ctx->pc = 0x1c8ea4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1c8ea8: 0xa35023  subu        $t2, $a1, $v1
    ctx->pc = 0x1c8ea8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c8eac: 0x1ea1004  sllv        $v0, $t2, $t7
    ctx->pc = 0x1c8eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x1c8eb0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c8eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8eb4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c8eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c8eb8: 0x1842006  srlv        $a0, $a0, $t4
    ctx->pc = 0x1c8eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c8ebc: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c8ebcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c8ec0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c8ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c8ec4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1c8ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8ec8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c8ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c8ecc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c8eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c8ed0: 0x18a1806  srlv        $v1, $t2, $t4
    ctx->pc = 0x1c8ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c8ed4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c8ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c8ed8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c8ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c8edc: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1c8edcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1c8ee0: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x1c8ee0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x1c8ee4: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x1c8ee4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
label_1c8ee8:
    // 0x1c8ee8: 0xff2b0000  sd          $t3, 0x0($t9)
    ctx->pc = 0x1c8ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 11));
label_1c8eec:
    // 0x1c8eec: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C8EECu;
    {
        const bool branch_taken_0x1c8eec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EECu;
        // 0x1c8ef0: 0xdfa30000  ld          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8eec) {
            ctx->pc = 0x1C8F48u;
            goto label_1c8f48;
        }
    }
    ctx->pc = 0x1C8EF4u;
    // 0x1c8ef4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1c8ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8ef8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c8ef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c8efc: 0x304c024  and         $t8, $t8, $a0
    ctx->pc = 0x1c8efcu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x1c8f00: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1c8f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c8f04: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c8f04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c8f08: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1c8f08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c8f0c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1c8f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1c8f10: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1c8f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1c8f14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c8f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c8f18: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c8f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c8f1c: 0x302c025  or          $t8, $t8, $v0
    ctx->pc = 0x1c8f1cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 2));
    // 0x1c8f20: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c8f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8f24: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c8f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c8f28: 0x18203c  dsll32      $a0, $t8, 0
    ctx->pc = 0x1c8f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) << (32 + 0));
    // 0x1c8f2c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1c8f2cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1c8f30: 0x302c024  and         $t8, $t8, $v0
    ctx->pc = 0x1c8f30u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x1c8f34: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x1c8f34u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1c8f38: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1c8f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c8f3c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c8f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c8f40: 0x303c025  or          $t8, $t8, $v1
    ctx->pc = 0x1c8f40u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
    // 0x1c8f44: 0xffb80000  sd          $t8, 0x0($sp)
    ctx->pc = 0x1c8f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 24));
label_1c8f48:
    // 0x1c8f48: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x1c8f48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8f4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c8f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8f50: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F50u;
        // 0x1c8f54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8F58u;
}
