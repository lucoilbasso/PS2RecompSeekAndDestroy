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

// Function: entry_00190fd0
// Address: 0x190fd0 - 0x191180
void entry_00190fd0_0x190fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190fd0_0x190fd0");
#endif

    switch (ctx->pc) {
        case 0x191178u: goto label_191178;
        default: break;
    }

    ctx->pc = 0x190fd0u;

label_190fd0:
    // 0x190fd0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x190fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x190fd4: 0x197180  sll         $t6, $t9, 6
    ctx->pc = 0x190fd4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 25), 6));
    // 0x190fd8: 0x8e4d0278  lw          $t5, 0x278($s2)
    ctx->pc = 0x190fd8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x190fdc: 0x300302d  daddu       $a2, $t8, $zero
    ctx->pc = 0x190fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190fe0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x190fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x190fe4: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x190fe4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x190fe8: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x190fe8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x190fec: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x190fecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x190ff0: 0x25aa0010  addiu       $t2, $t5, 0x10
    ctx->pc = 0x190ff0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x190ff4: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x190ff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x190ff8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x190ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x190ffc: 0x300202d  daddu       $a0, $t8, $zero
    ctx->pc = 0x190ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191000: 0xc6210060  lwc1        $f1, 0x60($s1)
    ctx->pc = 0x191000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191004: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x191004u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x191008: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x191008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19100c: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x19100cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191010: 0x300382d  daddu       $a3, $t8, $zero
    ctx->pc = 0x191010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191014: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x191014u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x191018: 0x300282d  daddu       $a1, $t8, $zero
    ctx->pc = 0x191018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19101c: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x19101cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x191020: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x191020u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x191024: 0x300782d  daddu       $t7, $t8, $zero
    ctx->pc = 0x191024u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191028: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x191028u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x19102c: 0x2f230007  sltiu       $v1, $t9, 0x7
    ctx->pc = 0x19102cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x191030: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x191030u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x191034: 0x3c80a  movz        $t9, $zero, $v1
    ctx->pc = 0x191034u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
    // 0x191038: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x191038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x19103c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x19103cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x191040: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x191040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x191044: 0x2e900007  sltiu       $s0, $s4, 0x7
    ctx->pc = 0x191044u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x191048: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x191048u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x19104c: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x19104cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x191050: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x191050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191054: 0xfc960008  sd          $s6, 0x8($a0)
    ctx->pc = 0x191054u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 22));
    // 0x191058: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x191058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x19105c: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x19105cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x191060: 0x79a20030  lq          $v0, 0x30($t5)
    ctx->pc = 0x191060u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 13), 48)));
    // 0x191064: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x191064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191068: 0xc621006c  lwc1        $f1, 0x6C($s1)
    ctx->pc = 0x191068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19106c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x19106cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x191070: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x191070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x191074: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x191074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x191078: 0xe4a20008  swc1        $f2, 0x8($a1)
    ctx->pc = 0x191078u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x19107c: 0x8d4b0010  lw          $t3, 0x10($t2)
    ctx->pc = 0x19107cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x191080: 0x8d4c0014  lw          $t4, 0x14($t2)
    ctx->pc = 0x191080u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x191084: 0x8d470020  lw          $a3, 0x20($t2)
    ctx->pc = 0x191084u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x191088: 0x8d480030  lw          $t0, 0x30($t2)
    ctx->pc = 0x191088u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x19108c: 0x8d490034  lw          $t1, 0x34($t2)
    ctx->pc = 0x19108cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 52)));
    // 0x191090: 0xeb3823  subu        $a3, $a3, $t3
    ctx->pc = 0x191090u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x191094: 0x8d460024  lw          $a2, 0x24($t2)
    ctx->pc = 0x191094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 36)));
    // 0x191098: 0x1684023  subu        $t0, $t3, $t0
    ctx->pc = 0x191098u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x19109c: 0x12c4823  subu        $t1, $t1, $t4
    ctx->pc = 0x19109cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x1910a0: 0x72140  sll         $a0, $a3, 5
    ctx->pc = 0x1910a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x1910a4: 0x1863023  subu        $a2, $t4, $a2
    ctx->pc = 0x1910a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x1910a8: 0x81140  sll         $v0, $t0, 5
    ctx->pc = 0x1910a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x1910ac: 0x91940  sll         $v1, $t1, 5
    ctx->pc = 0x1910acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x1910b0: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x1910b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1910b4: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x1910b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1910b8: 0x79a70040  lq          $a3, 0x40($t5)
    ctx->pc = 0x1910b8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 13), 64)));
    // 0x1910bc: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1910bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1910c0: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x1910c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1910c4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1910c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1910c8: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x1910c8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x1910cc: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1910ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1910d0: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1910d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1910d4: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x1910d4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x1910d8: 0x1621023  subu        $v0, $t3, $v0
    ctx->pc = 0x1910d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1910dc: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x1910dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1910e0: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1910e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1910e4: 0x1852823  subu        $a1, $t4, $a1
    ctx->pc = 0x1910e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1910e8: 0xad440020  sw          $a0, 0x20($t2)
    ctx->pc = 0x1910e8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 4));
    // 0x1910ec: 0xad420030  sw          $v0, 0x30($t2)
    ctx->pc = 0x1910ecu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 48), GPR_U32(ctx, 2));
    // 0x1910f0: 0xad430034  sw          $v1, 0x34($t2)
    ctx->pc = 0x1910f0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 52), GPR_U32(ctx, 3));
    // 0x1910f4: 0x7de70000  sq          $a3, 0x0($t7)
    ctx->pc = 0x1910f4u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 7));
    // 0x1910f8: 0xad450024  sw          $a1, 0x24($t2)
    ctx->pc = 0x1910f8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 36), GPR_U32(ctx, 5));
    // 0x1910fc: 0x8e440278  lw          $a0, 0x278($s2)
    ctx->pc = 0x1910fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x191100: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x191100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x191104: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x191104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x191108: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x191108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x19110c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x19110cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x191110: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x191110u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x191114: 0x1600ffae  bnez        $s0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x191114u;
    {
        const bool branch_taken_0x191114 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x191118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191114u;
        // 0x191118: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191114) {
            ctx->pc = 0x190FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190fd0;
        }
    }
    ctx->pc = 0x19111Cu;
    // 0x19111c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x19111cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191120: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x191120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x191124: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x191124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x191128: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x191128u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x19112c: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x19112cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x191130: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x191130u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x191134: 0x3051823  subu        $v1, $t8, $a1
    ctx->pc = 0x191134u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
    // 0x191138: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x191138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19113c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x19113cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x191140: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x191140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x191144: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x191144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x191148: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x191148u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19114c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x19114cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x191150: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x191150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x191154: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x191154u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x191158: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x191158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19115c: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x19115cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x191160: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x191160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x191164: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x191164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x191168: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x191168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x19116c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x19116cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x191170: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x191170u;
    SET_GPR_U32(ctx, 31, 0x191178u);
    ctx->pc = 0x191174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191170u;
    // 0x191174: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x191170u, 0x191178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191178u;
label_191178:
    // 0x191178: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x191178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x19117c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x19117cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x191180u;
}
